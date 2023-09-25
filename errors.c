#include "monty.h"

/**
 * malloc_error - function to decalre fail of malloc
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * open_error - opening file error
 * @filename: the filename to open
 */
void open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
