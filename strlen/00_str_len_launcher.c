/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_str_len_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:37 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 18:53:17 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include "../functions_to_test/tested.h"
#include "../unit_tests.h"
#include "str_len_tests.h"
#include "../lib/ft_printf/ft_printf.h"

// void	str_len_tester(void)
// {
// 	ft_printf("STRLEN: Basic test : ");
// 	if (str_len_test_1())
// 		ft_printf("\033[32m[OK]\033[32m\n");
// 	else
// 		ft_printf("\033[31m[KO]\033[0m\n");
// 	ft_printf("STRLEN: Wrong test : ");
// 	if (str_len_test_2())
// 		ft_printf("\033[32m[OK]\033[32m\n");
// 	else
// 		ft_printf("\033[31m[KO]\033[0m\n");
// 	ft_printf("STRLEN: Empty string test : ");
// 	if (str_len_test_3())
// 		ft_printf("\033[32m[OK]\033[32m\n");
// 	else
// 		ft_printf("\033[31m[KO]\033[0m\n");
// 	ft_printf("STRLEN: Segmentation fault test : ");
// 	if (str_len_test_4())
// 		ft_printf("\033[32m[OK]\033[32m\n");
// 	else
// 		ft_printf("\033[31m[Segmentation fault]\033[0m\n");
// 	ft_printf("STRLEN: Longer string test : ");
// 	if (str_len_test_5())
// 		ft_printf("\033[32m[OK]\033[32m\n");
// 	else
// 		ft_printf("\033[31m[KO]\033[0m\n");
// }

void	str_len_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	testlist = load_test(testlist, "STRLEN: basic test", str_len_test_1);
	testlist = load_test(testlist, "STRLEN: wrong test", str_len_test_2);
	testlist = load_test(testlist, "STRLEN: empty test", str_len_test_3);
	testlist = load_test(testlist, "STRLEN: segfault test", str_len_test_4);
	// load more tests

	launch_tests(testlist);
	//cleanup

	return ;
}

t_unit_test	*load_test(t_unit_test *testlist, char *name, t_fct_ptr fct)
{
	t_unit_test	*new_node;

	new_node = create_node(name, &fct);
	if (testlist == NULL) return new_node;
	add_node(testlist, new_node);
	return (testlist);
}

void	launch_tests(t_unit_test *testlist)
{
	int	pid;
	int	status;

	while (testlist != NULL) {
		// status = -1;
		// ft_printf("%s", testlist->name);
		pid = fork();
		if (pid < 0) {
			ft_printf("Something went horribly wrong!!");
			exit(EXIT_FAILURE) ;
		} else if (pid == 0) {
			ft_printf("%s ", testlist->name);
			// ft_printf(", return value: %d\n", (*testlist->fct)());
			// (*testlist->fct)();
			// (*testlist->fct)();
			exit((*testlist->fct)());
			// return((*testlist->fct)());
		} else {
		wait(&status);
		if (WEXITSTATUS(status) == 1) ft_printf(" [OK]\n");
		if (WEXITSTATUS(status) == 0) ft_printf(" [KO]\n");

		// ft_printf("status: %d\n", status);
		// ft_printf("WEXITSTATUS: %d\n", WEXITSTATUS(status));
		testlist = testlist->next;
		}
	}
	// go through the linked list
	// print first half of output (fct_2_be_tested : test_name)
	// fork child
	// give test_fct to child
	// wait for child to exit
	// interpret exitcode and print second half of output
	// count number of tests run and number of tests succeeded
}

t_unit_test	*create_node(char *name, t_fct_ptr *fct)
{
	t_unit_test	*new_node;

	new_node = malloc(sizeof(t_unit_test));
	new_node->name = name;
	new_node->fct = *fct;
	new_node->next = NULL;

	return (new_node);
}

// void		delete_node(t_unit_test *node);

void		add_node(t_unit_test *testlist, t_unit_test *node)
{
	t_unit_test	*current_node;

	// if (testlist == NULL)
	// 	testlist = node;
	// else
	{
		current_node = testlist;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = node;
	}
}