/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_dummy_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:11:29 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:12:14 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf/ft_printf.h"
#include "../unit_tests.h"
#include "dummy_tests.h"

void	dummy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	testlist = load_test(testlist, "dummy: buserror test", buserror_test_1);
	launch_tests(testlist);
	cleanup(testlist);
	return ;
}
