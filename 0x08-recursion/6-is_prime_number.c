#include "main.h"

/**
 * is_prime - check if an output is prime
 * @n: input number
 * @c: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	else
	{
		return (0 + is_prime(n, c + 1));
	}
}
/**
 * is_prime_number - check if input is prime
 * @n: input parameter
 *
 * Return: 1 if n is prime number 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));

