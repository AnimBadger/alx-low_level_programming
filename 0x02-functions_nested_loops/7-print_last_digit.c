#include "main.h"

/**
 * print_last_digit - driver function
 * @c: parameter for function
 *
 * Return: Last digit in number
 */

int print_last_digit(int c)
{
	_putchar(c % 10 + '0');
	return (c % 10);
}
