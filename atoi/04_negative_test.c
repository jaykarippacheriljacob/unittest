/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_negative_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:03:55 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:09:12 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test_tested.h"

bool atoi_test_4(void)
{
	int a;
	int b;

	a = -12345;
	b = ft_atoi("-12345");
	if (a != b)
		return (false);
	return (true);
}
