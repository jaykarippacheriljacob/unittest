/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_short_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:12:50 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 18:50:47 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"


#include <unistd.h>

int str_len_test_1(void)
{
	// write(1, "BOO\n", 4);
	// printf("BOO\n");
	// fflush(stdout);

	int a;
	int b;

	a = 5;
	// a = 6;
	b = ft_strlen("hallo");

	return (a == b);
	// if (a != b)
	// 	return (false);
	// return(true);
}
