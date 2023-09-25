#include "monty.h"

/**
 * add - add the top two elements
 * @stack: Pointer to a stack
 * @line_number: Line number of the command
 */

void add(stack_t **stack, unsigned int line_number)
{
	int count = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		count = (*stack)->next->n +  (*stack)->n;
		(*stack)->next->n = count;
		pop(stack, line_number);
	}
}
