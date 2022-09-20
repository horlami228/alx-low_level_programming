#include "main.h"

/**
 *_strlen - length of a string
 *@s: string
 *Return: return lent
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*(s + lent) != '\0')
		lent++;
	return (lent);
}
