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

	for (times = 0; times <= n; times++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
