#ifndef __DOG__
#define __DOG__

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog
 */

/**
 * struct dog - structure that takes details of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This strucure has the complete details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
