#ifndef __MAIN__
#define __MAIN__

#include <stdlib.h>

void print_name(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
