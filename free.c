#include "monty.h"

/**
 * free_stack - Free a stack
 * @head: a pointer to the head of the stack
 */

void free_stack(stack_t *head)
{
	stack_t *temp = head;

	if (head == NULL)
		return;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

/**
 * free_all - Free all memory and exit with failure
 * @argv: pointer to memory to be freed
 */
void free_all(char **argv)
{
	int index = 0;

	if (argv == NULL)
		return;

	while (argv[index] != NULL)
	{
		free(argv[index]);
		index++;
	}
	free(argv);
}
