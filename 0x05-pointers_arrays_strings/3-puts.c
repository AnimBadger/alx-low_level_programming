#include "main.h"

/**
 * _puts - function that prints characters in a string
 * @str: parameter of a string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++
	}
	_putchar('\n');
}
