#include <stdio.h>

/**
 *main - print from 0 to 9 with commas and space
 *Return: return 0 success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)

	{
		putchar(',');
		putchar(' ');
	}


	}

		putchar(10);
		return (0);
}
