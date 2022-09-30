#include <stdio.h>

/**
 * main - function that prints arguments in command line
 * @argc: number of command line argument
 * @argv: array of command line arguments
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
