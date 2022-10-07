#include "main.h"
#include <stdlib.h>

/**
 * _calloc - gets memory for an array
 * @nmemb: number of elements in the array
 * @size: bytes size of array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = malloc(nmemb * size);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		output[i] = 0;

	return (output);
}
