#include "search_algos.h"

/**
 * linear_search - function to make linear
 * @array: array of items to search through
 * @size: size of array
 * @value: value to be searched
 * Return: 0 if success else 0
 */

int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
    {
        return (-1);
    }

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
