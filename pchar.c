#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack
 * @stack: Pointer to a stack
 * @line_num: Line number the command is
 */
void pchar(s_node **stack, unsigned int line_num)
{
	int val = 0;

	(void)stack;

	if (!(m_node->current))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		free_close();
	}
	val = m_node->current->n;
	if (!isascii(val))
		printf("%c\n", val);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		free_close();
	}
}
