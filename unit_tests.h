/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:05:34 by jkarippa          #+#    #+#             */
/*   Updated: 2025/08/30 21:27:04 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

typedef bool	(*t_fct_ptr)(void);

typedef struct s_unit_test{
	char		*name;
	t_fct_ptr	*fct;

	t_unit_test	*next;
}	t_unit_test;

#endif  //UNIT_TESTS_H