#include "monty.h"

 * pall - prints all the values on the stack
 * @stack: Pointer to a stack
 * @line_number: Line number of the command
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