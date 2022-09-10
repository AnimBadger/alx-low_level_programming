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

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
