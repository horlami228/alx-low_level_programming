#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as
 * parameter.
 * @str: string to be copied
 * Return: NULL in case of error or pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int len;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	{
	copy[i] = str[i];
	}

	copy[len] = '\0';
	return (copy);
}
