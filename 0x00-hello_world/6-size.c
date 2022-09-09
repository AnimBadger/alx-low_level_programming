#include <stdio.h>
/**
 * main - is main entry function
 *  Return - means success
 */

int main(void)
{
	char character;
	int integer;
	long Long;
	long long LongLong;
	float floating;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long: %lu byte(s)\n", sizeof(Long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(LongLong));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating));

	return (0);


}
