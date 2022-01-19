#include "search_algos.h"


/**
 * binary_search -  searches a sorted array with binary search
 * @array: pointer to first element of array
 * @size:  number of elements in array
 * @value:  value to search
 * Return:  index where value is located -1
 * int binary_search(int *array, size_t size, int value)
 */

int binary_search(int *array, size_t size, int value)
{
	int i, middle;
	int last_idx = (int)size - 1;
	int first_idx = 0;

	if (array == NULL)
		return (-1);

	while (first_idx <= last_idx)
	{
		printf("Searching in array:");
		for (i = first_idx; i <= last_idx; i++)
		{
			printf(" %i", array[i]);
			if (i != last_idx)
				printf(",");
		}
		printf("\n");

		middle = (int)((first_idx + last_idx) / 2);

		if (value > array[middle])
			first_idx = middle + 1;
		else if (value < array[middle])
			last_idx = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
