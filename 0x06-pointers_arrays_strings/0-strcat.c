#include "main.h"

/**
 * _strcat - concatenates two strings
 * @char: input destination
 * @src: input source
 * Return: charcter
 */

char *_strcat(char *dest, char *src)
{
	int idx;
	int len;

	while (dest[idx++])
		len++;

	for (index = 0; src[idx]; idx++)
		dest[len++] = src[idx];

	return (dest);
}
