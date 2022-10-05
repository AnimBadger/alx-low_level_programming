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
	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		character[n] = c;
	}
	return (character);
}
