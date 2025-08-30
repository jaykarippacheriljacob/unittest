/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_wrong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:17:08 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:17:54 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

bool itoa_test_5(void)
{
	char *expected;
	char *result;
	bool test_result;

	expected = "999";
	result = ft_itoa(123);
	test_result = ft_strcmp(expected, result);
	free(result);
	if (test_result)
		return(false);
	return (true);
}
