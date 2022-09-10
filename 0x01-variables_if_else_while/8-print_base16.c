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
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

