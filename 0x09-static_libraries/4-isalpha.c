#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function driver
 * @c: parameter used
 *
 * Return: 1 if is alphabet 0 if otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
