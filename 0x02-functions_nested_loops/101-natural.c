#include <stdio.h>

/**
 * main - driver function
 *
 * Return: 0 mean success
 */

int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
