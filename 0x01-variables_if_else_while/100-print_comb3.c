#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 means success
 */

int main(void)
{
	int out;
	int in;

	for (out = 0; out <= 8; out++)
	{
		for (in = 1; in <= 9; in++)
		{
			if ((out != in) && (in > out))
			{
				putchar(out + '0');
				putchar(in + '0');

				if (out < 8 || in < 9)
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
