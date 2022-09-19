#include "main.h"

/**
 * print_rev - function to print string in reverse
 * @s: paramter
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (count == '\0')
		{
			break;
		}
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
