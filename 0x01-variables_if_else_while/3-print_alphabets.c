#include <stdio.h>
/**
 * main - entry point of the program
 * @ch - variable to be used
 *
 * Return: 0 means success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
