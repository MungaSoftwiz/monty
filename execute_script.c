#include "monty.h"

/**
 * execute_script - function executes monty scripts
 * @value: contains the opcode to be executed
 *
 * Return: success or failure
 */
int execute_script(FILE *value)
{
	stack_t *top = NULL;
	char monty[LINE_LENGTH], **av;
	int line = 0, change = 2, end;

	while (fgets(monty, LINE_LENGTH, value) != NULL)
	{
		line++;
		if ((strlen(monty) == 1 && monty[0] == '\n') ||
			empty_string(monty, "\n\t\a\b ") == 1)
				continue;
		av = string_split(monty, " \n\t\a\b");
		if (strcmp(av[0], "nop") == 0 || av[0][0] == '#')
		{
			free_all(av);
			continue;
		}
		else if (strcmp(av[0], "stack") == 0)
				change = 2;
		else if (strcmp(av[0], "push") == 0 && change == 2)
			push(&top, line);
		else
			end = handle_opcode(&top, av, line);
		free_all(av);
		if (end == EXIT_FAILURE)
			break;
	}
	free_stack(top);
	return (end);
}
