/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:31:28 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 18:49:00 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <sys/wait.h>

#include "unit_tests.h"
#include "lib/ft_printf/ft_printf.h"

int	main(void)
{
	str_len_launcher();

	return (0);
}
	// int	no_of_tests;
	// int	pid;
	// int	i;
	// int	status;

	// no_of_tests = 16;
	// i = 0;
	// while (i < no_of_tests)
	// {
	// 	if (fork() == 0)
	// 	{
	// 		pid = ft_printf("Test[%d]\n", i);
	// 		ft_printf("%d\n", pid);
	// 		exit(0);
	// 	}
	// 	else
	// 	{
	// 		wait(&status);
	// 		ft_printf("status: %d\n", WIFEXITED(status));
	// 	}
	// 	i++;
	// }
// }
