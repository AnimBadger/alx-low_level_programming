#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies 2 numbers
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	return (0);
}
