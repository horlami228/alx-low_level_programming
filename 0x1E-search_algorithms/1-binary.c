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
 * binary_search - perform a binary search
 * @array: array to search through
 * @size: size of the array
 * @value: target value
 * Return: value index on success, -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t lb = 0;
	size_t ub = size - 1;
	size_t mid;

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
