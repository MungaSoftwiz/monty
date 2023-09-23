#include "monty.h"

/**
 * _push - function pushes an element into the stack
 * @top: the top of the stack
 * @args: element to be pushed into the stack
 * @line_number: the line number on the bytecode
 *
 * Return: success or failure
 */

int _push(stack_t **top, char *args, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	if (!(_isdigit(args)) || args == NULL)
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
	if (*top != NULL)
	{
		new_node->next = *top;
		(*top)->prev = new_node;
		*top = new_node;
	}
	else
		*top = new_node;

	return (EXIT_SUCCESS);
}

/**
 * _pall - function prints all values of the stack
 * @top: the top of the stack
 * @line_number: the line number of the opcode
 */
void _pall(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	temp = *top;
	(void)line_number;

	if (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
