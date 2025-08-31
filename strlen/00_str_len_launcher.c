/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_str_len_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:37 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 21:14:56 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

// #include "../functions_to_test/tested.h"
#include "../lib/ft_printf/ft_printf.h"
#include "../unit_tests.h"
#include "str_len_tests.h"

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
	t_unit_test	*testlist;

	testlist = NULL;
	testlist = load_test(testlist, "STRLEN: basic test", str_len_test_1);
	testlist = load_test(testlist, "STRLEN: wrong test", str_len_test_2);
	testlist = load_test(testlist, "STRLEN: empty test", str_len_test_3);
	testlist = load_test(testlist, "STRLEN: segfault test", str_len_test_4);
	testlist = load_test(testlist, "STRLEN: long test", str_len_test_5);
	launch_tests(testlist);
	cleanup(testlist);
	return ;
}
