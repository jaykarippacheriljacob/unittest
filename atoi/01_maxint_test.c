/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_maxint_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:01:15 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:09:06 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test_tested.h"

bool atoi_test_1(void)
{
	int a;
	int b;

	a = 2147483647;
	b = ft_atoi("2147483647");
	if (a != b)
		return (false);
	return (true);
}
