/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:08:00 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 17:21:58 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tested.h"

size_t	ft_strlen(const char *s)
{
	int len = 0;

	while (*s != '\0') {
		len++;
		s++;
	}
	return (len);

	// const char * counter;

	// counter = (char *)s;
	// while (*counter++ != '\0')
	// 	;
	// return (counter - s - 1);
}
