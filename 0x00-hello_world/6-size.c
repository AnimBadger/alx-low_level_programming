#include <sdio.h>
/**
 *main is entry
 *0 means success
 */

int main(void)
{
	char character;
	int integer;
	long Long;
	long long LongLong;
	float floating;

	printf("Size of a char: %lu bytes(s)\n", sizeof(character));
	printf("Size of an int: %lu bytes(s)\n", sizeof(integer));
	printf("Size of a long: %lu bytes(s)\n", sizeof(Long));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(LongLong));
	printf("Size of a float: %lu bytes(s)\n", sizeof(floating));

	return (0);


}
