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
  
	char *fn = NULL; int strln = 0;
	char line[LINE_LENGTH]; 
  
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

	m_node = malloc(sizeof(my_struct));

	if(!m_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	m_node->data = 0;
	m_node->head = NULL;
	m_node->current = NULL;
	m_node->file = file;

	while (fgets(line, sizeof(line), file))
	{
		fn = strtok(line, " \t");
		strln = strlen(fn);
		if (_comment(fn))
        {
            handle_opcode(&stack, strlen(fn), fn, &(my_node.line_num));
        }
    }

    fclose(file);
    free_stack(stack);

    return (EXIT_SUCCESS);
}




/**
 * _comment - Check if the line is a comment
 * @fn: The first string
 *
 * Return: 0, else 1
 */

int _comment(char *fn)
{
	if (fn)
	{
		if (fn[0] == '#')
			return (0);
	}
	return (1);
}
