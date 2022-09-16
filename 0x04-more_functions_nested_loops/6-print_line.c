#include "main.h"

/**
 * print_line - driver function
 * @n: paramter passed
 *
 * Return: 0 means success
 */

void print_line(int n)
{
	int times;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (times = 1; times <= n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
