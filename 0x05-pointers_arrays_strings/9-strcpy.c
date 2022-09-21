#include "main.h"

/**
* _strcpy - Copy paste string
* @dest: the destination
* @src: the source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int incc = 0;

	while (*(src + incc) != '\0')
	{
		*(dest + incc) = *(src + incc);
		incc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}
