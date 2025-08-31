
#include <stdlib.h>
#include <sys/wait.h>

// #include "../functions_to_test/tested.h"
#include "unit_tests.h"
#include "strlen/str_len_tests.h"
#include "lib/ft_printf/ft_printf.h"

t_unit_test	*load_test(t_unit_test *testlist, char *name, t_fct_ptr fct)
{
	t_unit_test	*new_node;

	new_node = create_node(name, &fct);
	if (testlist == NULL) return new_node;
	add_node(testlist, new_node);
	return (testlist);
}

void	launch_tests(t_unit_test *testlist)
{
	int	pid;
	int	status;
	int	total;
	int	successes;

	total = 0;
	successes = 0;
	while (testlist != NULL) {
		total++;
		ft_printf("%s ", testlist->name);
		pid = fork();
		if (pid < 0) {
			ft_printf("Fork failed.\n");
			exit(EXIT_FAILURE) ;
		} else if (pid == 0) {
			exit((*testlist->fct)());
		} else {
		wait(&status);
		if (WIFEXITED(status)) {
			if (WEXITSTATUS(status) == 1) {
				ft_printf(" [OK]\n");
				successes++;
			}
			if (WEXITSTATUS(status) == 0) ft_printf(" [KO]\n");
		} else if (WIFSIGNALED(status)) {
			if (WTERMSIG(status) == 11) ft_printf("[SEGFAULT]\n");
			else if (WTERMSIG(status) == 7) ft_printf("[BUSERROR]\n");
			else ft_printf("exited because of some other signal.\n");
		}

		testlist = testlist->next;
		}
	}
	ft_printf ("\n%d/%d tests checked\n", successes, total);
	// go through the linked list
	// print first half of output (fct_2_be_tested : test_name)
	// fork child
	// give test_fct to child
	// wait for child to exit
	// interpret exitcode and print second half of output
}

void		cleanup(t_unit_test *testlist)
{
	t_unit_test	*temp_node;

	while (testlist != NULL) {
		temp_node = testlist;
		testlist = testlist->next;
		delete_node(temp_node);
	}
}
