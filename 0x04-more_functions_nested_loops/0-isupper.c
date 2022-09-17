#include "main.h"

/**
 *_isupper - to check for uppercase characters
 *@c: The character that we want to test
 *Return: return 1 if it is or 0 if otherwise
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
