#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - Initialize dog
 *
 * @d: a pointer to struct of dogs
 * @name: dog name
 * @age:  dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
