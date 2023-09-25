#include "monty.h"
#include <string.h>

/**
 * node_count - function checks for number of nodes in stack
 * @head: a pointer to head of the stack
 *
 * Return: the length of the stack
 */
size_t node_count(stack_t *head)
{
	int len = 0;

	if (head == NULL)
		return (len);

	while (head)
	{
		head = head->next;
		len++;
	}
	return (len);
}

/**
 * empty_string - checks for an emmpty string
 * @s: the argument passed as a string
 * @delimiter: the delmiter string
 *
 * Return: 1 if empty or 0 if not empty
 */
int empty_string(char *s, char *delimiter)
{
	int j, k;

	for (j = 0; s[j]; j++)
	{
		for (k = 0; delimiter[k]; k++)
		{
			if (s[j] == delimiter[j])
				break;
		}
		if (!delimiter[k])
			return (0);
	}
	return (1);
}

/**
 * tokenization -function tokenizes a string
 * @str: a double pointer to string to be tokenized
 * @delimiter: the deimiter string
 *
 * Return: a pointer to the token
 */
char *tokenization(char **str, const char *delimiter)
{
	char *token, *next;

	if (*str == NULL || str == NULL)
		return (NULL);

	token = *str;
	next = strstr(token, delimiter);

	if (next)
	{
		*next = '\0';
		*str = (char *)(next + strlen(delimiter));
	}
	return (token);
}
