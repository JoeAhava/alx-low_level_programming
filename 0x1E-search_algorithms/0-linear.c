#include "search_algos.h"

/**
 * linear_search -  searches for a value using the Linear search algorithm
 * @array: array to search
 * @size:  size of array
 * @value: value to search
 * Return:  first index located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%i] = [%i]\n", j, *array);
		if (*array == value)
		{
			return (j);
		}
		array++;
	}
	return (-1);
}
