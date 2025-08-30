/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_fail_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:03:19 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:09:09 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test_tested.h"

bool atoi_test_3(void)
{
	int a;
	int b;

	a = 999;
	b = ft_atoi("123");
	if (a != b)
		return (false);
	return (true);
}
