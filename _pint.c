#include "monty.h"

/**
 * _pint - function prints the top element in the stack
 * @stack: a double pointer to the top of the stack
 * @line_number: the line number of the opcode
 */
void _pint(s_node *stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
