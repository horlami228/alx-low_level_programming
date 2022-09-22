#include "main.h"

/**
*_strncat - concatenate two strings but lets you add the number*of bytes
*@src: string to be completed at end of dest
*@dest: string to be appended upon
*@n: interger parameter to compare index to
*Return: returns dest
*/


char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
