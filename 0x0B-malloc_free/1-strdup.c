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
	int i, j;
	int sum = 0;

	if (str == NULL)
		return (NULL);
	t = (int) strlen(str);
	for (j = 0; str[j] !='\0'; j++)
		sum += 1;
	new_str = malloc(sizeof(char) * sum + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (new_str[i] != str[i])
		{
			new_str[i] = str[i];
			i++;
		}
		
	}
	new_str[i] = '\0';
	return (new_str);
}
