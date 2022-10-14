#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all arguements
 * @n: number of arguements
 * @...: A variable number of parameter
 * Return: sum of all the arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list args;

	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
