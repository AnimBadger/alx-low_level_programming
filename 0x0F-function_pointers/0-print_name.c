#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name parameter
 * f: Pointer function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
