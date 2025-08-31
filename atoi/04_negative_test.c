/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_negative_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:03:55 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:08:45 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	atoi_test_4(void)
{
	int	a;
	int	b;

	a = -12345;
	b = ft_atoi("-12345");
	if (a != b)
		return (false);
	return (true);
}
