#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: Pointer to a stack
 * @line_number: Line number the command is
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		printf("\n");
		return;
	}
	while (temp != NULL && (temp->n > 0 && temp->n < 128))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
