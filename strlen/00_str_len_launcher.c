/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_str_len_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:37 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/30 21:38:17 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../functions_to_test/tested.h"
#include "../unit_tests.h"
#include "str_len_tests.h"

void	str_len_tester(void)
{
	ft_printf("STRLEN: Basic test : ");
	if (str_len_test_1())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Wrong test : ");
	if (str_len_test_2())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Empty string test : ");
	if (str_len_test_3())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Segmentation fault test : ");
	if (str_len_test_4())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[Segmentation fault]\033[0m\n");
	ft_printf("STRLEN: Longer string test : ");
	if (str_len_test_5())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
}

void	str_len_launcher(void)
{
	t_unit_test		*testlist;

	load_test(&testlist, "STRLEN: Basic test", &str_len_test_1);
	num_of_tests = 1;
	num_of_tests = find_len_of_tests(list_of_tests);
}

void	load_test(t_unit_test *testlist, char *name, t_fct_ptr *fct)
{
	t_unit_test	*new_node;

	new_node = create_node(name, fct);
	add_node(testlist, new_node);
}

void	launch_tests(){
	// go through the linked list
	// print first half of output (fct_2_be_tested : test_name)
	// fork child
	// give test_fct to child
	// wait for child to exit
	// interpret exitcode and print second half of output
	// count number of tests run and number of tests succeeded
}

t_unit_test	*create_node(char *name, t_fct_ptr *fct);
void		add_node(t_unit_test *testlist, t_unit_test *node);
void		delete_node(t_unit_test *node);
