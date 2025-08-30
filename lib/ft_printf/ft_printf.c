/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:18:13 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/28 22:02:22 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Problem 1:	The %s specifier wash craching with segmentaion fault
** 				when it was provided with ft_printf("%s", (char *)NULL).
** Solution 1:	When you counter that print "(null)" and
** 				sent bytes = 6.
*/
/*
** Problem 2:	The %u failed when negative numbers were passed.
** 				ft_printf("%u", -42);
** Solution 2:	This was due to the fact that the function used to count
** 				the digits for unsigned int was the same as the one for counting
** 				the integer type. This caused wrong memory size allocations.
*/
/*
** Problem 3:	The %u failed when ft_printf("%u", 0) was run.
** Solution 3:	This was because when '0' was given, the count_udigits() was not
** 				counting the bytes for '0'.
*/
/*
** Problem 4:	For the test printf("\001\002\007\v\010\f\r\n") by paco strict
** 				where it tried to fail the write function {using close(1)} it did
**				not return -1.
** Solution 4:	Introduced error check to all the sub print functions to validate
** 				whether an error was encountered dureing print or not. if so the
** 				function terminates with -1.
*/
/*
** Problem 5:	Faced with segmentation fault at all subprint functions when the
** 				ft_strlenp() was called.
** Solution 5:	Introduced a pre-check to see if the string to be count is
** 				valid or not!
*/
#include "ft_printf.h"

/*
** Helper function to check space between specifiers
*/
static int	space_flag_check(const char *string, int *i)
{
	int	space_flag;

	space_flag = 0;
	while (string[*i] == ' ')
	{
		space_flag = 1;
		(*i)++;
	}
	return (space_flag);
}

/*
** Helper function to handle the spaces with the %d and %i specifiers
*/
static ssize_t	int_with_space_handler(int pos, int space_flag)
{
	ssize_t	s_bytes;
	ssize_t	i_bytes;

	s_bytes = 0;
	if (space_flag && pos > -1)
	{
		s_bytes = print_char(' ');
		if (s_bytes == -1)
			return (s_bytes);
	}
	i_bytes = print_int(pos);
	if (i_bytes == -1)
		return (i_bytes);
	else
		i_bytes = i_bytes + s_bytes;
	return (i_bytes);
}

/*
** Helper function to check for the  specifiers required to be evaluated.
*/
static void	check_specifier(char spec, int space_flag, va_list args,
		ssize_t *bytes)
{
	if (spec == '%')
		(*bytes) = print_char(spec);
	else if (spec == 'd' || spec == 'i')
		(*bytes) = int_with_space_handler(va_arg(args, int), space_flag);
	else if (spec == 'u')
		(*bytes) = print_uint(va_arg(args, unsigned int));
	else if (spec == 'x')
		(*bytes) = print_hexa_uint(va_arg(args, unsigned int));
	else if (spec == 'X')
		(*bytes) = print_xhexa_uint(va_arg(args, unsigned int));
	else if (spec == 'p')
		(*bytes) = print_ptr_address(va_arg(args, uintptr_t));
	else if (spec == 'c')
		(*bytes) = print_char(va_arg(args, int));
	else if (spec == 's')
		(*bytes) = print_string(va_arg(args, const char *));
	else
	{
		if (OS == 1 || OS == 3)
			(*bytes) = print_char('%');
		(*bytes) += print_char(spec);
	}
}

/*
** Helper function to handle the specifier
*/
static ssize_t	specifier_handler(const char *string, int *i, va_list args)
{
	int		space_flag;
	ssize_t	bytes;

	bytes = 0;
	space_flag = space_flag_check(string, i);
	if (string[*i] == '\t')
		bytes = print_char(string[*i]);
	else
		check_specifier(string[*i], space_flag, args, &bytes);
	(*i)++;
	return (bytes);
}

/*
** Function that mimics the orginal printf() without the buffer management.
*/
int	ft_printf(const char *string, ...)
{
	int		i;
	int		bytes;
	size_t	total_bytes;
	va_list	args;

	total_bytes = 0;
	va_start(args, string);
	i = 0;
	while (string && string[i] != '\0')
	{
		if (string[i++] == '%')
			bytes = specifier_handler(string, &i, args);
		else
			bytes = print_char(string[i - 1]);
		if (bytes == -1)
		{
			va_end(args);
			return (-1);
		}
		else
			total_bytes += bytes;
	}
	va_end(args);
	return (total_bytes);
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	n_std;
// 	int	n_mine;

// 	x = 42;
// 	y = 200;
// 	n_std = printf("%d %d %k %d\n", 11, 22, 33);
// 	fflush(stdout);
// 	n_mine = ft_printf("%d %d %k %d\n", 11, 22, 33);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%		d yueb%  %% d% d\n", -42, 42);
// 	fflush(stdout);
// 	n_mine = ft_printf("%		d yueb%  %% d% d\n", -42, 42);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%d sd % d% d%%\n", 11, 12, 13);
// 	fflush(stdout);
// 	n_mine = ft_printf("%d sd % d% d%%\n", 11, 12, 13);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%d%d%d%i\n", 11, 12, 14, 13);
// 	fflush(stdout);
// 	n_mine = ft_printf("%d%d%d%i\n", 11, 12, 14, 13);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%%d%d%d%d%d\n", 15, 12, 13, 14, 11);
// 	fflush(stdout);
// 	n_mine = ft_printf("%%d%d%d%d%d\n", 15, 12, 13, 14, 11);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%	%% % c %	c%c\n", 'J', 'K', 'L');
// 	fflush(stdout);
// 	n_mine = ft_printf("%	%% % c %	c%c\n", 'J', 'K', 'L');
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%	%% % s %	s%s\n", "H", "World");
// 	fflush(stdout);
// 	n_mine = ft_printf("%	%% % s %	s%s\n", "H", "World");
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%		u yueb%  %%u%  u\n", 42, 0);
// 	fflush(stdout);
// 	n_mine = ft_printf("%		u yueb%  %%u%  u\n", 42, 0);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%	x yueb%  %%x %  x %x %x %x\n", 0, 9, 11, 15, 16);
// 	fflush(stdout);
// 	n_mine = ft_printf("%	x yueb%  %%x %  x %x %x %x\n", 0, 9, 11, 15, 16);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%		X yueb%  %%X %  X %X %X%X\n", 0, 9, 12, 15, 16);
// 	fflush(stdout);
// 	n_mine = ft_printf("%		X yueb%  %%X %  X %X %X%X\n", 0, 9, 12, 15, 16);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	n_std = printf("%		p %p %p\n", (void *)&x, (void *)&y);
// 	fflush(stdout);
// 	n_mine = ft_printf("%		p %p %p\n", (void *)&x, (void *)&y);
// 	printf(" -> printf returned %d, ft_printf returned %d\n\n", n_std, n_mine);
// 	fflush(stdout);
// 	return (0);
// }
