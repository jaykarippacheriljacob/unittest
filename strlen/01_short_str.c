/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_short_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:12:50 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:14:26 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

bool str_len_test_1(void)
{
	int a;
	int b;

	a = 5;
	b = ft_strlen("hallo");
	if (a != b)
		return (false);
	return(true)
}
