#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c: random character
 *
 * Return: return the array
 */

char *create_array(unsigned int size, char c)
{
	char *character;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
