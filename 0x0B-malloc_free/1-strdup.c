#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * strdup - function that returns a pointer to a newly allocated 
 * space in memory
 *
 * @str: an array of strings
 * Return: string of chars
 */

char *_strdup(char *str)
{
	char new_str[], *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * strlen(str));
	if (new_str == 0)
		return (NULL);
	else
		i = 0;
		while (strlen(str) >= i)
		{
			new_str[i] = str[i];
			i--;
		}
		ptr = &new_str;
	return (ptr);
}
