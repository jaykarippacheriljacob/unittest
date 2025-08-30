/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:35:36 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/28 22:03:22 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Function to print an integer.
*/
ssize_t	print_int(int integer)
{
	char	*buffer;
	int		bytes;
	int		err;

	buffer = ft_itoap(integer);
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
** Function to print an unsigned integer.
*/
ssize_t	print_uint(unsigned int integer)
{
	char	*buffer;
	int		bytes;
	int		err;

	buffer = ft_uitoa(integer);
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
** Function to print a character.
*/
ssize_t	print_char(char c)
{
	ssize_t	err;

	err = write(1, &c, sizeof(char));
	if (err == -1)
		return (-1);
	else
		return (1);
}

/*
** Function to print a string.
*/
ssize_t	print_string(const char *string)
{
	int	bytes;
	int	err;

	bytes = 0;
	if (string)
	{
		bytes = ft_strlenp(string);
		err = write(1, string, bytes);
		if (err == -1)
			return (-1);
	}
	else
	{
		bytes = 6;
		err = write(1, "(null)", bytes);
		if (err == -1)
			return (-1);
	}
	return (bytes);
}

/*
** Function to print small alphabet hexadecimal formatted unsigned int.
*/
ssize_t	print_hexa_uint(uintptr_t integer)
{
	char	*buffer;
	int		bytes;
	int		err;

	buffer = ft_hexa_uitoa(integer);
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
