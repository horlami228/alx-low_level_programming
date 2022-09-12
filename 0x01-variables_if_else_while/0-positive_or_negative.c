#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print if the number is positive or negative
 *
 *Return: return 0 succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
{
	printf("%i is positive\n", n);
}
	else if (n == 0)
{
	printf("%i is zero\n", n);
}
	else if (n < 0)
{
	printf("%i is negative\n", n);
}
	return (0);
}

