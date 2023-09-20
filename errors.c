#include "monty.h"

/**
 * malloc_error - function to decalre fail of malloc
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
