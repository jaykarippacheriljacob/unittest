#include <stdlib.h>

// #include "../functions_to_test/tested.h"
#include "unit_tests.h"
#include "strlen/str_len_tests.h"
#include "lib/ft_printf/ft_printf.h"

t_unit_test	*create_node(char *name, t_fct_ptr *fct)
{
	t_unit_test	*new_node;

	new_node = malloc(sizeof(t_unit_test));
	if (new_node == NULL) {
		ft_printf("Malloc failed.\n");
		exit(EXIT_FAILURE);
	}
	new_node->name = name;
	new_node->fct = *fct;
	new_node->next = NULL;

	return (new_node);
}

void		delete_node(t_unit_test *node)
{
	free(node);
}

void		add_node(t_unit_test *testlist, t_unit_test *node)
{
	t_unit_test	*current_node;

	// if (testlist == NULL)
	// 	testlist = node;
	// else
	{
		current_node = testlist;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = node;
	}
}