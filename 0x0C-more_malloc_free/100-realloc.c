#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to new allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *output;
	unsigned int i, max_num = new_size;
	char *previ_p = ptr;

	if (ptr == NULL)
	{
		output = malloc(new_size);
		return (output);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	output = malloc(new_size);
	if (output == NULL)
		return (NULL);
	if (new_size > old_size)
		max_num = old_size;
	for (i = 0; i < max_num; i++)
		output[i] = previ_p[i];
	free(ptr);
	return (output);
}
