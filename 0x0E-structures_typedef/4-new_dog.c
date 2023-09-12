#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog from our dog_t structure
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * Return: NULL or Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = strdup(name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
