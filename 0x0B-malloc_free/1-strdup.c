#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicate it parameter
 * @str: parameter passed
 *
 * Return: the duplicate, NULL if there is an error
 */

char _strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dup = (char *)malloc(sizeof(char) * (i + 1));

		if (dup == NULL)
		{
			return (NULL);
		}
		for (j = 0; j <= i; j++)
		{
			dup[j] = str[i];
		}
	return (dup);
	}
}
