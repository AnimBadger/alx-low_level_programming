#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that add positve numbers
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 * Return: 0 mean success
 */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
