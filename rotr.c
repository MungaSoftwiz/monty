#include "monty.h"

/**
 * div - divide the elements of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number of the command
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL || (*stack)->next != NULL)
	{
		stack_t *tmp = *stack;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = *stack;
		(*stack)->prev = tmp;
		*stack = tmp;
		(*stack)->prev = NULL;
	}
}
