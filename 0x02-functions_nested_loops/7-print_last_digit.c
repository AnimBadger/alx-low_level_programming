#include "main.h"

/**
 * print_last_digit - driver function
 * @c: parameter for function
 *
 * Return: Last digit in number
 */

int print_last_digit(int c)
{
	int final = c % 10;

	if (final < 0)
	{
		_putchar(-final + '0');
		return (-final);
	}
	else
	{
		_putchar(final + '0');
		return (final);
	}
}
