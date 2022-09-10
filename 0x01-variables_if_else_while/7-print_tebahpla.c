#include <stdio.h>

/**
 * main - entry point of the program
 * @ch - variable used
 *
 * Return: 0 means success
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
