/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_buserror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:06:55 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 20:43:32 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if defined(__i386__)
# undef FLAG
# define FLAG 0
#elif defined(__x86_64__)
# undef FLAG
# define FLAG 1
#endif

int	buserror_test_1(void)
{
	char	arr[4];
	int		*ptr;

	if (FLAG == 1)
		__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	else
		__asm__("pushf\norl $0x40000,(%esp)\npopf");
	ptr = (int *)(arr + 1);
	*ptr = 42;
	return (0);
}
