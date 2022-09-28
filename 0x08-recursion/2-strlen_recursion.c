#include "stdio.h"

/**
 * _strlen_recursion - function counts the number of characters in a string
 * @s: paramter passed
 *
 * Return: total number of characters in the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
