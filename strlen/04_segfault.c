/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_segfault.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:41 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 18:53:37 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int str_len_test_4(void)
{
	int b;
	void *ptr;

	b = ft_strlen(ptr);
	if (b)
		return (false);
	return(true);
}
