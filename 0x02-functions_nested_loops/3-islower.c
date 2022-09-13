#include "main.h"
#include <ctype.h>

/**
 * _islower - checks in parameter is lower
 * @ch: papameter passed
 *
 * Return: 1 if is lower or 0 is otherwise
 */

int _islower(int ch)
{
	if (islower(ch))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
