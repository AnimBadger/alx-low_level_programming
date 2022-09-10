#include <stdio.h>

/**
 * main - entry point of the program
 * @ch - variable to handle operations
 *
 * Return: 0 means succesful
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
