/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_longer_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:14:01 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 18:53:35 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

int str_len_test_5(void)
{
	int b, a;
	
	a = 22;
	b = ft_strlen("12234351643246823sdgfd");
	if (a != b)
		return (false);
	return(true);
}
