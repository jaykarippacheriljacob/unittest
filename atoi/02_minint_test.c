/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_minint_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:02:23 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:09:00 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	atoi_test_2(void)
{
	int	a;
	int	b;

	a = -2147483648;
	b = ft_atoi("-2147483648");
	if (a != b)
		return (false);
	return (true);
}
