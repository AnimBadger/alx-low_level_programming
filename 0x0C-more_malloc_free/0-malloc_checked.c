#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: amount of bytes
 *
 * Return: pointer to allocated memory
 * if malloc fails, exit with value 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
