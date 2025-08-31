/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:29 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 18:50:55 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int str_len_test_3(void)
{
	// printf("BEE\n");
	// fflush(stdout);

	int a;
	int b;

	a = 0;
	b = ft_strlen("");
	if (a != b)
		return (false);
	return(true);
}
