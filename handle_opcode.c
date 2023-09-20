#include "monty.h"
#include <stdio.h>

/** handle_opcode - Determine which function
 * to execute from the command
 * @stack: pointer to stack
 * @strlen: length of command
 * @op: command passed
 * @line_num: line number of command
 *
 * Return: Nothing
 */
 
void handle_opcode(s_node *stack, int str_len, char *op, int *line_num)
{
	int i = 0;

	instruction_t look_up[] = {
		{"push", _push}, {"pall", _pall},
		{"pint", _pint},{NULL, NULL}
	};

	++(*line_num);
	
	if (str_len)
	{
		if (op[strlen(op) - 1] == '\n')
			op[strlen(op) - 1] = '\0';

		for (i = 0; look_up[i].opcode != NULL; i++)
		{
			if (strncmp(look_up[i].opcode, op, strlen(look_up[i].opcode)) == 0)
			{
				if (strlen(look_up[i].opcode) == strlen(op))
				{
					look_up[i].f(stack, *line_num);
					return;
				}
			}
		}
		unknown(op, line_num);
	}
}


/**
 * unknown - Print error message for unknown command
 * @op: command
 * @line_num: line number of command
 */
void unknown(char *op, int *line_num)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", *line_num, op);
	free_close();
}
