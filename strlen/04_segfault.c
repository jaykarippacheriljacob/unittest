/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_segfault.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:41 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:15:21 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	str_len_test_4(void)
{
	int	b;

	b = ft_strlen(NULL);
	if (b)
		return (false);
	return (true);
}
