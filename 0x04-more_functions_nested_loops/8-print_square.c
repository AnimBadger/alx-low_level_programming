#include "main.h"

/**
 * print_square - driver function
 * @size: parameter to print size of square
 *
 */

void print_square(int size)
{
	int out, in;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (out = 0; out < size; out++)
	{
		for (in = 0; in < size; in++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
