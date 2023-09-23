#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr,"L%u: can't pop an empty stack\n, line_number");
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*tmp = (*stack)->next;
}
