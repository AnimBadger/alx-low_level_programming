#include "main.h"

/**
 * print_square - driver function
 * @size: parameter to print size of square
 *
 */

void print_square(int size)
{
	int out, in;

	for (out = 0; out < size; out++)
	{
		for (in = 0; in < out; in++)
		{
			_putchar(35);
		}
		if (out != (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
