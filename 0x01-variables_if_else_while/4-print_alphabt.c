#include <stdio.h>

/**
 *main - print the alphabet but not q and e
 *Return: 0 if success
 */
int main(void)
{
	char pp;

	for (pp = 'a'; pp <= 'z'; pp++)
	{

	if (pp == 'q' || pp == 'e')
	{
		continue;
	}

		putchar(pp);
	}
		putchar(10);

		return (0);
}
