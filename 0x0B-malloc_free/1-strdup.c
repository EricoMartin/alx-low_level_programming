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
	char *new_str;
	int i, t;

	if (str == NULL)
		return (NULL);
	t = (int) strlen(str);
	new_str = malloc(sizeof(char) *t);
	if (t == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (t >= i)
		{
			new_str[i] = str[i];
			i--;
		}
		
	}
	return (&new_str);
}
