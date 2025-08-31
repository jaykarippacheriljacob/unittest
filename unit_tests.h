/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:05:34 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/31 21:42:02 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

# include <stdbool.h>

typedef int					(*t_fct_ptr)(void);
typedef struct s_unit_test	t_unit_test;

typedef struct s_unit_test
{
	char					*name;
	t_fct_ptr				fct;

	t_unit_test				*next;
}							t_unit_test;

void						atoi_launcher(void);
void						str_len_launcher(void);
void						dummy_launcher(void);
void						itoa_launcher(void);

void						fork_help(t_unit_test *testlist);

int							ft_strcmp(char *s1, char *s2);
t_unit_test					*load_test(t_unit_test *testlist, char *name,
								t_fct_ptr fct);
void						launch_tests(t_unit_test *testlist);
void						cleanup(t_unit_test *testlist);

t_unit_test					*create_node(char *name, t_fct_ptr *fct);
void						add_node(t_unit_test *testlist, t_unit_test *node);

#endif // UNIT_TESTS_H