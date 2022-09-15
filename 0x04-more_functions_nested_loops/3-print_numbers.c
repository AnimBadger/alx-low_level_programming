#include "main.h"

/**
 * print_numbers - function to print numbers
 *
 * Return: 0 means success
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
