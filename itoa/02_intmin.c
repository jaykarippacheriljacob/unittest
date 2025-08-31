/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_intmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:16:18 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:14:08 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"
#include "../unit_tests.h"

int	itoa_test_2(void)
{
	char	*expected;
	char	*result;
	bool	test_result;

	expected = "-2147483648";
	result = ft_itoa(-2147483648);
	test_result = ft_strcmp(expected, result);
	free(result);
	if (test_result)
		return (false);
	return (true);
}
