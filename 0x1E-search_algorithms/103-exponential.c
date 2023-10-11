#include "search_algos.h"

/**
 * print_array - print the array
 * @array: array to be printed
 * @lb: lower bound
 * @hb: upper bound
*/
void print_array(int *array, int lb, int hb)
{
	int i;

	printf("Searching in array: ");
	for (i = lb; i < hb; i++)
	{
		printf("%d", array[i]);

		if (i < hb - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar(10);
}

/**
 * min - find the smallest number
 * @a: exponential index
 * @b: size of array
 * Return: smallest value
*/
int min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

/**
 * exponential_search - exponential algorithm
 * @array: array to retrieve the element
 * @size: size of the array
 * @value: target value
 * Return: The index found, -1 for otherwsie
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t lb;
	size_t ub;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	lb = i / 2;
	ub = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", lb, ub);
	while (lb <= ub)
	{
		print_array(array, lb, ub + 1);
		mid = (lb + ub) / 2;
		if (value == array[mid])
		{
			return (mid);
		}

		else if (value > array[mid])
		{
			lb = mid + 1;
		}

		else
		{
			ub = mid - 1;
		}
	}

	return (-1);
}
