#include <stdio.h>

/**
 *main - print the letters backward
 *Return: 0 if success
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{

		putchar(i);
	}
		putchar(10);
		return (0);
}
