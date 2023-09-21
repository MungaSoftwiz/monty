#include "monty.h"

/**
 * count_node - Count the number of element in a stack
 *
 * Return: number of elements
 */

size_t count_node(void)
{
	s_node temp = NULL;
	int i = 0;

	if (my_node->current)
	{
		temp = my_node->current;
		while (temp)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
