/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_wrong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:12 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 21:15:12 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int	str_len_test_2(void)
{
	int	a;
	int	b;

	a = 1;
	b = ft_strlen("hallo");
	if (a != b)
		return (false);
	return (true);
}
