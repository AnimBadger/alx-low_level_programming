#include "main.h"

/**
 * print_square - driver function
 * @size: parameter to print size of square
 *
 */

void print_square(int size)
{
	int out, in;

	for (out = 1; out < size; out++)
	{
		for (in = 0; in <= out; in++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
