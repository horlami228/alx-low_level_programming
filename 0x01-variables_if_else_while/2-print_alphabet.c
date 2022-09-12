#include <stdio.h>
#include <stdlib.h>

/**
 *main -prints all alphabet
 *
 *Return: return 0 succesful
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
