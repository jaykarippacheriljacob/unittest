/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:42:07 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/05 10:04:40 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** A helper function to help count the number of digits in an unsigned integer
** in hexadecimal format.
*/
static int	hexa_count_digits(uintptr_t n)
{
	int			len;
	uintptr_t	num;

	len = 0;
	num = n;
	if (num == 0)
		len++;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

/*
** Function that creates a string in hexadecimal in small alphabets
** out of an unsigned integer provided.
*/
char	*ft_hexa_uitoa(uintptr_t n)
{
	int			len;
	uintptr_t	num;
	char		*str;

	len = hexa_count_digits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (n == 0)
		str[0] = '0';
	while (num != 0)
	{
		if ((num % 16) < 10)
			str[--len] = (num % 16) + '0';
		else
			str[--len] = 'a' - (10 - (num % 16));
		num /= 16;
	}
	return (str);
}

/*
** Function that creates a string in hexadecimal in larger alphabets
** out of an unsigned integer provided.
*/
char	*ft_xhexa_uitoa(uintptr_t n)
{
	int			len;
	uintptr_t	num;
	char		*str;

	len = hexa_count_digits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (n == 0)
		str[0] = '0';
	while (num != 0)
	{
		if ((num % 16) < 10)
			str[--len] = (num % 16) + '0';
		else
			str[--len] = 'A' - (10 - (num % 16));
		num /= 16;
	}
	return (str);
}
