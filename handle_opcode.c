#include "monty.h"
#include <stdio.h>

/**
 * handle_opcode - Determine which function
 * to execute from the command
 * @stack: pointer to stack
 * @av: command arguments passed
 * @line_number: line number of command
 *
 * Return: Nothing
 */

int handle_opcode(stack_t  **stack, char **av, unsigned int line_number)
{
	int index;

	instruction_t look_up[] = {
		{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop},
		{"add", add}, {"sub", sub},
		{"mul", mul}, {"div", divv},
		{"mod", mod}, {"swap", swap},
		{"pstr", pstr}, {"pchar", pchar},
		{NULL, NULL}
	};

	for (index = 0; look_up[index].opcode != NULL; index++)
	{
		if (strcmp(look_up[index].opcode, av[0]) == 0)
		{
			look_up[index].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	free_stack(*stack);
	unknown(av[0], line_number);
	return (EXIT_SUCCESS);
}
