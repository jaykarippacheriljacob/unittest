/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_collector.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:44:22 by fbraune           #+#    #+#             */
/*   Updated: 2025/08/31 22:49:21 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GC_COLLECTOR_H
# define GC_COLLECTOR_H

# include <fcntl.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

extern void				*__real_malloc(size_t size);
extern void				__real_free(void *ptr);
extern void				__real_exit(int status);

typedef struct s_garbage
{
	void				*content;
	struct s_garbage	*next;
	struct s_garbage	*prev;
}						t_garbage;

t_garbage				**get_gc_start(void);
void					add_node_gc(void *ptr);
void					clear_gc(void);
void					__wrap_exit(int status);
void					ft_putstr_err(char *s);

void					*__wrap_malloc(size_t size);
void					__wrap_free(void *ptr);

#endif