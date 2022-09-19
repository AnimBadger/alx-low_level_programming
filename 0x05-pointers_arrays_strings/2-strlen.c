#include "main.h"

/**
 * _strlen - function to count characters in string
 * @s: parameter to pass as string
 *
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
