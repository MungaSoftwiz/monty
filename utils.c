#include "monty.h"

/**
  *  _isdigit - entry point
  * Description: checks if character is a digit
  * @s: the string arguments to be checked for a digit
  *
  * Return: 1 if true, 0 if false
  */

int _isdigit(char *s)
{
	int len = 0, negative = 0;

	while (s[len])
		len++;
	if (s[0] == '-')
	{
		negative = 1;
		if (len == 1)
			return (0);
	}
	while (negative < len)
	{
		if (s[negative] >= '0' || s[negative] <= '9')
		{

		}
		return (0);

		negative++;
	}
	return (1);
}

/**
 * _strlen - functions finds length of a string
 * @string: the string to be checked
 *
 * Return: the length of the string
 */
int _strlen(char *string)
{
	int index;

	index = 0;
	while (*(string + index) != '\0')
		index++;
	return (index);
}

/**
 * _strcmp - function compares two strings
 * @string1: first string
 * @string2: second string
 *
 * Return: 0 if found, otherwise, -ve or +ve value
 */
int _strcmp(char *string1, char *string2)
{
	while (*string1 != '\0' && *string1 == *string2)
	{
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}

/**
 * _strcpy - function copies the string from src to dest
 * @dest: the destination of the copied string
 * @src: the source of the copied string
 *
 * Return: a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	size_t index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * _strdup - function duplicates a string
 * @string: the string to be duplicated
 *
 * Return: a poiner to the duplicated string
 */
char *_strdup(char *string)
{
	size_t len = _strlen(string);
	char *duplicate;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		malloc_error();
	_strcpy(duplicate, string);

	return (duplicate);
}
