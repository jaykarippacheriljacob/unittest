/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:01:58 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 21:43:41 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi/atoi_tests.h"
#include "itoa/itoa_tests.h"
#include "lib/ft_printf/ft_printf.h"
#include "strlen/str_len_tests.h"
#include "unit_tests.h"
#include <stdlib.h>
#include <sys/wait.h>

t_unit_test	*load_test(t_unit_test *testlist, char *name, t_fct_ptr fct)
{
	t_unit_test	*new_node;

	new_node = create_node(name, &fct);
	if (testlist == NULL)
		return (new_node);
	add_node(testlist, new_node);
	return (testlist);
}

void	print_signal(int status)
{
	if (WTERMSIG(status) == 11)
		ft_printf("\033[31m[SEGFAULT]\033[0m\n");
	else if (WTERMSIG(status) == 7)
		ft_printf("\033[31m[BUSERROR]\033[0m\n");
	else
		ft_printf("exited because of some other signal.\n");
}

void	print_exit(int status, int *successes)
{
	if (WEXITSTATUS(status) == 1)
	{
		ft_printf(" \033[32m[OK]\033[0m\n");
		(*successes)++;
	}
	else if (WEXITSTATUS(status) == 0)
		ft_printf("\033[31m[KO]\033[0m\n");
}

void	launch_tests(t_unit_test *testlist)
{
	int	status;
	int	total;
	int	successes;

	total = 0;
	successes = 0;
	while (testlist != NULL)
	{
		total++;
		ft_printf("%s ", testlist->name);
		fork_help(testlist);
		wait(&status);
		if (WIFEXITED(status))
			print_exit(status, &successes);
		else if (WIFSIGNALED(status))
			print_signal(status);
		testlist = testlist->next;
	}
	ft_printf("\n%d/%d tests checked\n", successes, total);
}

void	cleanup(t_unit_test *testlist)
{
	t_unit_test	*temp_node;

	while (testlist != NULL)
	{
		temp_node = testlist;
		testlist = testlist->next;
		free(temp_node);
	}
}
