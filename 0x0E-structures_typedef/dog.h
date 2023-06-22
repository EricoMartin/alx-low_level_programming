#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure that represents a dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Description: Dog structure
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * dog_t - Dog typedef
 */
typedef struct dog dog_t;
#endif
