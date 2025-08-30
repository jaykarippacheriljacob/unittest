/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_spaces_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:04:29 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:09:29 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test_tested.h"

bool atoi_test_5(void)
{
	int a;
	int b;

	a = 42;
	b = ft_atoi("000042");
	if (a != b)
		return (false);
	return (true);
}
