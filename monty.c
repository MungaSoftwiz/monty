#include "monty.h"

/**
 * main - Monty interpreter
 * @ac: argument count
 * @av: argument vector
 * Return: 0
*/

int main(int ac, char **av)
{
	FILE *fp;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty fp\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(av[1], "r");
	if (fp == NULL)
		open_error(av[1]);

	execute_script(fp);

	if (fp != NULL)
		fclose(fp);

	return (0);
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
