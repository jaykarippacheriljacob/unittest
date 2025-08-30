/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:23:30 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/28 22:00:54 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** A helper function to help count the number of digits in the integer.
*/
static int	count_digits(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/*
** Function to create a string out of the integer provided.
*/
char	*ft_itoap(int n)
{
	int		len;
	long	num;
	char	*str;

	len = count_digits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
		num = -num;
	if (n == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
** A helper function to help count the number of digits in the integer.
*/
static int	count_udigits(unsigned int n)
{
	int				len;
	unsigned long	num;

	len = 0;
	num = n;
	if (num == 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/*
** Function that creates a string out of an unsigned integer provided.
*/
char	*ft_uitoa(unsigned int n)
{
	int				len;
	unsigned long	num;
	char			*str;

	len = count_udigits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (n == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
** Function to count the number of characters in the provided string.
*/
size_t	ft_strlenp(const char *s)
{
	unsigned long	count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}
