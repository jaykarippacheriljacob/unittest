/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:36:54 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 22:49:34 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc_collector.h"

void	*__wrap_malloc(size_t size)
{
	void	*ret_pointer;

	ret_pointer = __real_malloc(size);
	if (!ret_pointer)
	{
		ft_putstr_err("Fatal: malloc fail\n");
		__wrap_exit(EXIT_FAILURE);
	}
	add_node_gc(ret_pointer);
	return (ret_pointer);
}

void	__wrap_free(void *ptr)
{
	t_garbage	**head;
	t_garbage	*temp;

	head = get_gc_start();
	if (!ptr)
		return ;
	temp = *head;
	while (temp)
	{
		if (temp->content == ptr)
		{
			if (temp->prev)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			__real_free(temp->content);
			__real_free(temp);
			return ;
		}
		temp = temp->next;
	}
}
