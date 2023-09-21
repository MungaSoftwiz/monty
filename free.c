#include "monty.h"

/**
 * free_stack - Free a stack
 */

void free_stack(void)
{
	s_node temp = NULL, temp2 = NULL;

	if (!my_node)
		return;
	
	temp = my_node->current;
	if (!temp)
		return;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}

/**
 * free_close - Free all memory and exit with failure
 */
void free_close(void)
{
	free_stack();
	free(my_node);
	exit(EXIT_FAILURE);
}
