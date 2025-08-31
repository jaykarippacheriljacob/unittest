/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_longer_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:14:01 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:15:54 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	str_len_test_5(void)
{
	int	b;
	int	a;

	a = 22;
	b = ft_strlen("12234351643246823sdgfd");
	if (a != b)
		return (false);
	return (true);
}
