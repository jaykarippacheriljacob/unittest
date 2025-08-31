/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:31:28 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 22:53:31 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ft_printf/ft_printf.h"
#include "unit_tests.h"
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int	main(void)
{
	dummy_launcher();
	str_len_launcher();
	atoi_launcher();
	itoa_launcher();
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
