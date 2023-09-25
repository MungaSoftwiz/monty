#include "monty.h"

/**
 * rotl - rotate the elements of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number of the command
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *tmp1 = *stack;
		stack_t *tmp2 = *stack;

		while (tmp2->next != NULL)
		{
			tmp2 = tmp2->next;
		}
		tmp2->next = *stack;
		(*stack)->prev = tmp2;
		*stack = tmp1->next;
		(*stack)->prev = NULL;
		tmp1->next = NULL;
	}
}
