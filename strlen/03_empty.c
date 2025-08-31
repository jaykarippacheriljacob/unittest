/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:29 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:15:17 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	str_len_test_3(void)
{
	int	a;
	int	b;

	a = 0;
	b = ft_strlen("");
	if (a != b)
		return (false);
	return (true);
}
