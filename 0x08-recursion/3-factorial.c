#include "main.h"

/**
 * factorial - function driver
 * @n: parameter passed
 *
 * Return: factorial of parameter
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
