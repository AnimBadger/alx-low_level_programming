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
	int inner;

	for (out = 0; out <= 7; out++)
	{
		for (in = 1; in <= 8; in++)
		{
			for (inner = 2; inner <= 9; inner++)
			{
				if ((out != in && in != inner) && (inner > in && in > out))
				{
					putchar(out + '0');
					putchar(in + '0');
					putchar(inner + '0');
					if (out < 7 || in < 8 || inner < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
