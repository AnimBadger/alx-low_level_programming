#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: 0 means success
 */

void main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
