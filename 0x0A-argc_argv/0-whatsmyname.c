#include <stdio.h>

/**
 * main - print program name
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 means success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
