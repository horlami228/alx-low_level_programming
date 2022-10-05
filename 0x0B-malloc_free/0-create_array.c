#include "main.h"

/**
* create_array - it creates an array of chars, and initializes
* it with a specific char.
* @size: size of the array
* @c: character to insert
* Return: NULL if the size is zero  or if it fails, or return
* a pointer to the array for when it works.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
