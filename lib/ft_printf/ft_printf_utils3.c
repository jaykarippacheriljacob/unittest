/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:43:21 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/28 22:04:11 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Function to print large alphabet hexadecimal formatted unsigned int.
*/
ssize_t	print_xhexa_uint(uintptr_t integer)
{
	char	*buffer;
	int		bytes;
	int		err;

	buffer = ft_xhexa_uitoa(integer);
	if (!buffer)
		return (-1);
	bytes = ft_strlenp(buffer);
	err = write(1, buffer, bytes);
	free(buffer);
	buffer = NULL;
	if (err == -1)
		return (-1);
	return (bytes);
}

/*
** Function to print the pointer address in hexadecimal format
** in smaller alphabet.
*/
ssize_t	print_ptr_address(uintptr_t integer)
{
	int	bytes;
	int	err;

	bytes = 2;
	err = 0;
	if (integer == 0)
	{
		err = print_string(NULL_PTR);
		if (err == -1)
			return (-1);
		return (err);
	}
	err = print_string("0x");
	if (err == -1)
		return (-1);
	err = print_hexa_uint(integer);
	if (err == -1)
		return (-1);
	else
		bytes += err;
	return (bytes);
}
