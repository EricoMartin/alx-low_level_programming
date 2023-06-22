#include <stdio.h>
#include <stdlib.h>

#ifndef DOG_H
#define DOG_H

/*
 * Dog - A structure that represents a dog.
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Returns: A dog struct
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
