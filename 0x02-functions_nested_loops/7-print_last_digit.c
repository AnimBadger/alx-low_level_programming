#include "main.h"

/**
 * print_last_digit - driver function
 * @c: parameter for function
 *
 * Return: Last digit in number
 */

int print_last_digit(int c)
{
	int final;

	if (c < 0)
	{
		final = -1 * (c % 10);
	}
	else
	{
		final = c % 10;
	}

	_putchar((final % 10) + '0');
	return (c % 10);
}
