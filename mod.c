#include "monty.h"
/**
 * mod - computes the rest of division
 * @stack: Pointer to a stack
 * @line_number: Line number of the command
 */

void mod(stack_t **stack, unsigned int line_number)
{
	int count = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		count = (*stack)->next->n % (*stack)->n;
		(*stack)->next->n = count;
		pop(stack, line_number);
	}
}
