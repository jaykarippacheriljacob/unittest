/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:16:37 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:17:40 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

bool itoa_test_3(void)
{
	char *expected;
	char *result;
	bool test_result;

	expected = "-12345";
	result = ft_itoa(-12345);
	test_result = ft_strcmp(expected, result);
	free(result);
	if (test_result)
		return(false);
	return (true);
}
