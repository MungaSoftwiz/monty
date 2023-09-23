#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number the command is
 */

void pstr(stack_t **stack, unsigned int line_number)
{

	(void)stack;
	
	stack_t tmp = *stack;

	while (tmp && tmp->n > 0 && tmp->n < 128)
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}

	printf("\n");
}
