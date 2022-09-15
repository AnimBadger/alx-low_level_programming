#include "main.h"

/**
 * more_numbers - driver function
 *
 * Return: 0 means success
 */

void more_numbers(void)
{
	int out;
	int in;

	for (out = 0; out < 10; out++)
	{
		for (in = 0; in <= 14; in++)
		{
			if (in > 9)
			{
				_putchar((in / 10) + '0');
			}
			_putchar((in % 10) + '0');
		}
	_putchar('\n');
	}
}
