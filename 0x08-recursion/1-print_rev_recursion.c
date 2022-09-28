#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: paramter used as string
 *
 * Return: 0 means success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
