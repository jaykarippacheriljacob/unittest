/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 21:28:44 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 22:49:09 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc_collector.h"

t_garbage	**get_gc_start(void)
{
	static t_garbage	*head = NULL;

	return (&head);
}

void	add_node_gc(void *ptr)
{
	t_garbage	**head;
	t_garbage	*new_node;
	t_garbage	*temp;

	new_node = __real_malloc(sizeof(t_garbage));
	if (!new_node)
	{
		ft_putstr_err("Fatal: malloc fail in GC\n");
		exit(EXIT_FAILURE);
	}
	head = get_gc_start();
	new_node->content = ptr;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		return ;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

void	clear_gc(void)
{
	t_garbage	**head;
	t_garbage	*next;
	t_garbage	*temp;

	head = get_gc_start();
	temp = *head;
	while (temp)
	{
		next = temp->next;
		__real_free(temp->content);
		__real_free(temp);
		temp = next;
	}
	*head = NULL;
}

void	__wrap_exit(int status)
{
	clear_gc();
	__real_exit(status);
}

void	ft_putstr_err(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		write(STDERR_FILENO, s, 1);
		s++;
	}
}
