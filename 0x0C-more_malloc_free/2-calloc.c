#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function to create int array
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer of array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int cnt;
	int *output;

	if (min > max)
	{
		return (NULL);
	}

	cnt = max - min + 1;

	output = malloc(sizeof(int) * cnt);

	if (output == NULL)
	{
		return (NULL);
	}

	output[0] = min;
	for (i = 1; i < cnt; i++)
	{
		++min;
		output[i] = min;
	}

	return (output);
}
