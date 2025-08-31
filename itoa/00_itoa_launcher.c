/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_itoa_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:55 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 22:50:13 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf/ft_printf.h"
#include "../unit_tests.h"
#include "itoa_tests.h"

void	itoa_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	testlist = load_test(testlist, "ITOA: basic test", itoa_test_1);
	testlist = load_test(testlist, "ITOA: wrong test", itoa_test_2);
	testlist = load_test(testlist, "ITOA: empty test", itoa_test_3);
	testlist = load_test(testlist, "ITOA: 0 test", itoa_test_4);
	testlist = load_test(testlist, "ITOA: long test", itoa_test_5);
	launch_tests(testlist);
	cleanup(testlist);
	return ;
}
