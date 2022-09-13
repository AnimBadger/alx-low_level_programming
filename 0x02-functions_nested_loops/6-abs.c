#include "main.h"
#include <stdlib.h>

/**
 * _abs - function driver
 * @c: parameter passed
 *
 * Return: 0 means success
 */

int _abs(int c)
{
	int final = abs(c);
	_putchar(final);
	_putchar('\n');

	return (0);
}
