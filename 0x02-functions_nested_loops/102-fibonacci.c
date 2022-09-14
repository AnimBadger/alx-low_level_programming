#include <stdio.h>

/**
 * main - driver function
 *
 * Return: 0 means success
 */

int main(void)
{
	int i;
	long int feb[50];

	feb[0] = 1;
	feb[1] = 2;

	printf("%ld, %ld, ", feb[0], feb[1]);

	for (i = 2; i < 50; i++)
	{
		feb[i] = feb[i - 1] + feb[i - 2];

		if (i == 49)
		{
			printf("%ld\n", feb[i]);
		}
		else
		{
			printf("%ld, ", feb[i]);
		}
	}
	return (0);
}
