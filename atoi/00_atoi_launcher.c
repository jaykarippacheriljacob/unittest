/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:36:17 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/30 20:50:52 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions_to_test/tested.h"

void	atoi_tester(void)
{
	ft_printf("ATOI: Negative integer test : ");
	if (atoi_test_3())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ATOI: Largest positive integer test : ");
	if (atoi_test_1())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ATOI: Largest negative integer test : ");
	if (atoi_test_2())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ATOI: Zero test : ");
	if (atoi_test_4())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
	ft_printf("ATOI: Space test : ");
	if (atoi_test_5())
		ft_printf("\033[32m[OK]\033[32m\n");
	else
		ft_printf("\033[31m[KO]\033[0m\n");
}
