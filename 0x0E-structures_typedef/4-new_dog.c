#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that prints a struct dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
 * Return: p address value
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	(*ptr).name = malloc(strlen(name) + 1);
	(*ptr).owner = malloc(strlen(owner) + 1);
	ptr->age = age;

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(*ptr->name);
		return (NULL);
	}

	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);

	return (p);
}
