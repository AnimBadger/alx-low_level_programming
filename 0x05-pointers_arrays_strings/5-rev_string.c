#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: input parameter
 */

void rev_string(char *s)
{
	int count = 0;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		temp = *(str + j);
		*(str + j) = *(str + (j - 1));
		*(str + (j - 1)) = temp;
	}
}
