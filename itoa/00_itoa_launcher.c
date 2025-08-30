/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_itoa_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:34:55 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/30 20:07:40 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

void	itoa_tester(void)
{
	ft_printf("ITOA: Negative integer test : ");
	if (itoa_test_3())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ITOA: Largest positive integer test : ");
	if (itoa_test_1())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ITOA: Largest negative integer test : ");
	if (itoa_test_2())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ITOA: Zero test : ");
	if (itoa_test_4())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ITOA: Wrong test : ");
	if (itoa_test_5())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
}
