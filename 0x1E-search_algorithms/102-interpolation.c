#include "search_algos.h"

/**
 * interpolation_search - interpolation algorithm search
 * @array: array to retrieve from
 * @size: size of array
 * @value: value to retreive
 * Return: index found on success, -1 for otherwsie
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t probe;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		probe = low + (high - low) * (value - array[low]) /
		(array[high] - array[low]);

		if (probe > high)
		{
			printf("Value checked array[%ld] is out of range\n", probe);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (value == array[probe])
			return (probe);
		else if (value > array[probe])
			low = probe + 1;
		else if (value < array[probe])
			high = probe - 1;
	}

	return (-1);
}
