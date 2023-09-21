#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: Pointer to a stack
 * @line_num: Line number of the command line
 */
void swap(s_node *stack, unsigned int line_num)
{

	int num = 0, temp2 = 0;
	s_node temp = NULL;

	(void)stack;
	
	num = count_node();

	if (num > 1)
	{
		temp = my_node->current->next;
		temp2 = temp->n;
		temp->n = my_node->current->n;
		my_node->current->n = temp2;
	}
	else
	{
		free_stack();
		free(my_node);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
}
