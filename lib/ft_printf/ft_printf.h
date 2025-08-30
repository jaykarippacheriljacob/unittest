/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:12:04 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/28 22:00:12 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
// # include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/*
** Defining macros for checing linux or not!
*/
# if defined(__linux__)
#  define NULL_PTR "(nil)"
#  define OS 1
# elif defined(__APPLE__)
#  define NULL_PTR "0x0"
#  define OS 2
# else
#  define NULL_PTR "0x0"
#  define OS 3
# endif
/*
** Main function.
*/
int		ft_printf(const char *string, ...);
/*
** Utility functions used from libft.
*/
char	*ft_itoap(int n);
size_t	ft_strlenp(const char *s);
/*
** New utility functions used.
*/
ssize_t	print_int(int integer);
char	*ft_uitoa(unsigned int n);
ssize_t	print_uint(unsigned int integer);
ssize_t	print_char(char c);
ssize_t	print_string(const char *string);
char	*ft_hexa_uitoa(uintptr_t n);
ssize_t	print_hexa_uint(uintptr_t integer);
char	*ft_xhexa_uitoa(uintptr_t n);
ssize_t	print_xhexa_uint(uintptr_t integer);
ssize_t	print_ptr_address(uintptr_t integer);
#endif
