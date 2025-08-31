/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_wrong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:13:12 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 17:43:52 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int str_len_test_2(void)
{
	printf("BAA\n");
	// fflush(stdout);

	int a;
	int b;

	a = 1;
	b = ft_strlen("hallo");
	if (a != b)
		return (false);
	return(true);
}
