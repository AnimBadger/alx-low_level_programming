#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicate it parameter
 * @str: parameter passed
 *
 * Return: the duplicate, NULL if there is an error
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int len = sizeof(str) / sizeof(char);
	char *dup;
	char *fulldup;

	dup = (char *)malloc(sizeof(char) * len);

	while (s != '\0')
	{
		*dup++ = *str++;
	}
	*dup = '\0';
	fulldup = dup;

	return (fulldup);
}



