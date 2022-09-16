#include "main"
#include <ctype.h>

/**
 * _isupper - function driver
 * @c: parameter to be checked
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
