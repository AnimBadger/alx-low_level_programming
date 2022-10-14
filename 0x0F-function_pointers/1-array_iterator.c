#include "function_pointers.c"

/**
 * array_iterator - Execute function given as a parameter
 * @array: The  array
 * @size: size of the array
 * @action: Pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
