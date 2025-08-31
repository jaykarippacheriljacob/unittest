/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:36:17 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 21:11:06 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf/ft_printf.h"
#include "../unit_tests.h"
#include "atoi_tests.h"

void	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	testlist = load_test(testlist, "atoi: max test", atoi_test_1);
	testlist = load_test(testlist, "atoi: min test", atoi_test_2);
	testlist = load_test(testlist, "atoi: fail test", atoi_test_3);
	testlist = load_test(testlist, "atoi: negative test", atoi_test_4);
	testlist = load_test(testlist, "atoi: spaces test", atoi_test_5);
	launch_tests(testlist);
	cleanup(testlist);
	return ;
}
