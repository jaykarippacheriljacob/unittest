/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_0.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:17:00 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:17:47 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

bool itoa_test_4(void)
{
	char *expected;
	char *result;
	bool test_result;

	expected = "0";
	result = ft_itoa(0);
	test_result = ft_strcmp(expected, result);
	free(result);
	if (test_result)
		return(false);
	return (true);
}
