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
#endif
