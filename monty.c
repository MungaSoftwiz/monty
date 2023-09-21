#include "monty.h"

/* my_struct *my_node = NULL;*/

/**
 * main - Monty interpreter
 * @ac: argument count
 * @av: argument vector
 * Return: 0
*/

int main(int ac, char **av)
{
	FILE *file;
	char *op = NULL;
	char line[LINE_LENGTH];
	my_struct *my_node = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(av[1], "r");

	if (!file)
	{
		perror(av[1]);
		return (EXIT_FAILURE);
	}

	my_struct my_node = {0};
	my_node.fd = file;

	s_node stack = NULL;

	while (fgets(line, sizeof(line), file))
	{
		op = strtok(line, " \t");
        if (_comment(op))
        {
            handle_opcode(&stack, strlen(op), op, &(my_node.line_num));
        }
    }

    fclose(file);
    free_stack(stack);

    return (EXIT_SUCCESS);
}




/**
 * _comment - Check if the line is a comment
 * @op: The first string
 *
 * Return: 0, else 1
 */

int _comment(char *op)
{
	if (op)
	{
		if (op[0] == '#')
			return (0);
	}
	return (1);
}
