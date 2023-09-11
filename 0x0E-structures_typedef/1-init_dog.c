#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog
 * @d -  pointer
 * @name: second member
 * @age: third member
 * @owner: fourth member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
