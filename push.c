#include "monty.h"

/**
 * push - function pushes an element into the stack
 * @stack: the stack of the stack
 * @line_number: the line number on the bytecode
 *
 * Return: success or failure
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *args = NULL;
	stack_t *new_node;
	(void)line_number;

	if (_isdigit(args) == 0 || args == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		malloc_error();
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(args);
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
	else
		*stack = new_node;

}
