#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - A function that creates an array of chars, and initializes it with a specific char.
 *
 * @size: Size of the arrray.
 * @c: character to intialize array with.
 * Return: An array of characters
 */

char *create_array(unsigned int size, char c)
{
	int *arr;
	arr = malloc(sizeof(int) * size);
	for (int i = 0; i <= size; i++)
	{
		arr[i] = c;
	}
	return *arr;
}
