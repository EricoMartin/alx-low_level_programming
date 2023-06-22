#ifndef DOG_H
#define DOG_H

/*
 * Struct dog - A structure that represents a dog.
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

#endif
