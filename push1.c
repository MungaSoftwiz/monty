#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc faled\n");
		exit(EXIT_FAILURE);
	}

	new_node->prev = NULL;
	new_node->next = *stack;
	*stack = new_node;
}
