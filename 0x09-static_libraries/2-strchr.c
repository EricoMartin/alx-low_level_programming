#include "main.h"

/**
 * _strchr - copy memory
 * @s: charcaters
 * @c: character input
 * Return: character
 */


char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
