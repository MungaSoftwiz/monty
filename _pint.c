#include "monty.h"

void _pint(s_node *stack, unsigned int line_number)
{
	if (!(my_node->current))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", my_node->current->n);
}
