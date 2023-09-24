#include "monty.h"

/**
 * div - divide the elements of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number of the command 
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1 = NULL;
	stack_t *tmp2 = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	tmp1 = (*stack)->next;
	tmp2 = *stack;

	for (tmp2->next != NULL; tmp2 = tmp2->next)
	{
		tmp1->prev = NULL;
		tmp2->next = *stack;
		(*stack)->next = NULL;
		(*stack)->prev = tmp2;
		*stack = tmp1;
	}
