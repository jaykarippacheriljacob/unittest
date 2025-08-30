/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:37 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/30 20:41:26 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

void	str_len_tester(void)
{
	ft_printf("STRLEN: Basic test : ");
	if (str_len_test_1())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Wrong test : ");
	if (str_len_test_2())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Empty string test : ");
	if (str_len_test_3())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Segmentation fault test : ");
	if (str_len_test_4())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("STRLEN: Longer string test : ");
	if (str_len_test_5())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
}
