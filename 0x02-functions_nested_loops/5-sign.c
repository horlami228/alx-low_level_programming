#include "main.h"
/**
 * print_sign - function to know for a sign of a number
 * @n: the int that we will  use for the argument of the function
 * Return: 0 succesufl
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

