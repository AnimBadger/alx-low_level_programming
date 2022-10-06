#include "main.h"
#include <stdlib.h>

/**
 * _calloc - aloocate memory for array of a certain number of elements
 * @nmemb: the number of elements
 * @size: the byte of size of each array
 *
 * Return: if nmemb or size = 0, or funtion fails - NULL, otherwise return pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
