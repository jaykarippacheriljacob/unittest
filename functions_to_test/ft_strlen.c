/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:08:00 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/30 19:08:18 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tested.h"

size_t	ft_strlen(const char *s)
{
	const char	*counter;

	counter = (char *)s;
	while (*counter++ != '\0')
		;
	return (counter - s - 1);
}
