/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:19:33 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:28:19 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi/atoi_tests.h"
#include "itoa/itoa_tests.h"
#include "lib/ft_printf/ft_printf.h"
#include "strlen/str_len_tests.h"
#include "unit_tests.h"
#include <stdlib.h>
#include <sys/wait.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	fork_help(t_unit_test *testlist)
{
	int	pid;

	pid = fork();
	if (pid < 0)
	{
		ft_printf("Fork failed.\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
		exit((*testlist->fct)());
}
