#include "monty.h"
#include <string.h>

/**
 * split_helper - function aids in splitting
 * @input: the input to be split
 * @delimiter: the delimiter separating input
 *
 * Return: the split string
 */
char **split_helper(char *input, char *delimiter)
{
	char *str_cpy;

	if (input == NULL)
		return (NULL);

	str_cpy = _strdup(input);
	if (str_cpy == NULL)
		return (NULL);

	return (string_split(str_cpy, delimiter));
}

/**
 * string_split - function splits a string into an arr
 * @input: the character input of arguments
 * @delimiter: the string delimiter
 *
 * Return: return the arr of string
 */
char **string_split(char *input, char *delimiter)
{
	char *token = NULL;
	char **arr = NULL;
	int arr_size = 0, index = 0, i;

	token = strtok(input, delimiter);
	while (token)
	{
		token = strtok(NULL, delimiter);
		arr_size++;
	}
	arr = malloc(sizeof(char *) * (arr_size + 1));
	if (arr == NULL)
		malloc_error();

	input = _strdup(input);
	if (input == NULL)
	{
		malloc_error();
		free(arr);
	}

	token = strtok(input, delimiter);

	while (token != NULL)
	{
		arr[index] = _strdup(token);
		if (arr[index] == NULL)
		{
			malloc_error();
			for (i = 0; i < index; i++)
			{
				free(arr[i]);
			}
			free(arr);
			free(input);
			return (NULL);
		}
		token = strtok(NULL, delimiter);
		index++;
	}
	arr[arr_size] = NULL;
	free(input);
	return (arr);
}
