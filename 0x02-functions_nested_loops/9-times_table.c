#include "main.h"

/**
 * times_table - driver function
 *
 * Return: 0 means success
 */

void times_table(void)
{
	int t, n, m;

	for (t = 0; t <= 9; t++)
	{
		_putchar(0 + '0');
		for (n = 1; n <= 9; n++)
		{
			m = t * n;

			_putchar(',');
			_putchar(' ');

			if (m <= 9)
			{
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
