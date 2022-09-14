#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - driver function
 * @n: parameter passed
 *
 * Return: 0 means success
 */

void print_to_98(int n)
{
		if (n <= 98)
		{
			for (; n <= 98; n++)
			{
				printf("%d", n);
				if (n == 98)
				{
					continue;
				}
				printf(", ");
			}
			printf("\n");
		}
		else if (n >= 98)
		{
			for (; n >= 98; n--)
			{
				printf("%d", n);
				if (n == 98)
				{
					continue;
				}
				printf(", ");
			}
			printf("\n");
}
