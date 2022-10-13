#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all arguements
 * @n: number of arguements
 * Return: sum of all the arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}
