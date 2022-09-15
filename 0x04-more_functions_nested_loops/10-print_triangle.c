#include "main.h"

/**
 * print_triangle - driver function
 * @size: parameter passed
 */

void print_triangle(int size)
{
	int space, row, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= (size - row); space++)
		{
			_putchar(' ');
		}
		for (symbol = 1; symbol <= row)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
