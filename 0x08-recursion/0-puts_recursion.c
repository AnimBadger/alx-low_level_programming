#include "main.h"

/**
 * _puts_recursion - function driver
 * @s: character to be printed
 *
 * Return: 0 means success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
