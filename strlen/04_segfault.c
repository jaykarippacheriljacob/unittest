/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_segfault.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:41 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:14:49 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

bool str_len_test_4(void)
{
	int b;
	void *ptr;

	b = ft_strlen(ptr);
	if (b)
		return (false);
	return(true)
}
