#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + 1))
	{
		i++;
	}
	dup = (char *)malloc(sizeof(*str) * i + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (*(str + i))
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
