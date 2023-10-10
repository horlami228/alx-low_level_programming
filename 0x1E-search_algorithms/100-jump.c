#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 * @array: arrray to retrieve element
 * @size: size of the array
 * @value: value to search for
 * Return: The index on success, -1 on otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	int low = 0;
	int jump = sqrt(size);
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);
		else if (value > array[i])
			low = i;
		else if (value < array[i])
			break;
	}

	printf("Value found between indexes [%d] and [%ld]\n", low, i);

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
