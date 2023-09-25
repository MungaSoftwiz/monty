#include "monty.h"

/**
 * sub -function subtracts top two elements of a stack
 * @stack: a double pointer to top of stack
 * @line_number: the line number
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int count = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		count = (*stack)->next->n - (*stack)->n;
		(*stack)->next->n = count;
		pop(stack, line_number);
	}
}
