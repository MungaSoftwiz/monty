#include "monty.h"

/**
 * div - divide the elements of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number of the command 
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	tmp = *stack;

	for (tmp->next != NULL; tmp == tmp->next)
	{
		tmp->prev = NULL;
		tmp->next = *stack;
		tmp->prev = NULL;
		(*stack)->prev = tmp;
		*stack = tmp;
	}
