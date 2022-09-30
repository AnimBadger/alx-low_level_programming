#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function to check if parameter passed is a digit
 * @c: parameter passed to be checked
 *
 * Return: 1 if parameter is digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
