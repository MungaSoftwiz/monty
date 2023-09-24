#include "monty.h"

/**
* pall - prints all values  in a stack
*
* @stack: head of the linked list
* @line_number: line number
* Return: Nothing
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
