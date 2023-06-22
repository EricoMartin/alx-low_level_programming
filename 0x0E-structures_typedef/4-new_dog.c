#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - gets the length of a string
 * @str: string input
 * Return: String length
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcopy - copy a string into a new string
 * @old: The initial string
 * @new: The copied string
 * Return: Copied string
 */

char *_strcopy(char *new, char *old)
{
	int i;

	for (i = 0; old[i]; i++)
	{
		new[i] = old[i];
	}
	new[i] = '\0';

	return (new);
}

/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner:owner of dog
 *Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
