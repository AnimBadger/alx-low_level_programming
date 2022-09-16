#include "main.h"
#include <ctype.h>

/**
 * _isupper - function driver
 * @c: parameter to be checked
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
