#include "function_pointers.h"

/**
 * int_index - function that search for integer in array
 * @array: array of integers
 * @size: size of the array
 * @cmp: a pointer to the function to be comared with
 *
 * Return: If no element matches or size less than 0 - -1
 *	else, the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
