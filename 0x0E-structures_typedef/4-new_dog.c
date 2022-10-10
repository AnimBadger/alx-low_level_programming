#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
void fillMem(char *str, int strLen, char *dest);

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: Pointer to newly created dog if successful, NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}
	nameLen = _strlen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	fillMem(name, nameLen, n_dog->name);

	ownerLen = _strlen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	fillMemm(owner, ownerLen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);
}

/**
 * _strlen - lenght of string
 * @str: a string
 *
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * fillMem - copy of strings
 * @str: string
 * @strlen: string lenght
 * @dest: memory allocated
 */

void fillMem(char *str, int strlen, char *dest)
{
	int i;

	for (i = 0; i < strlen; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
}
