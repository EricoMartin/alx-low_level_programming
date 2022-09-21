#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input destination
 * @src: input source
 * Return: charcter
 */

char *_strcat(char *dest, char *src)
{
	int idx;
	int len;

	idx = 0;
	len = 0;
	while (dest[idx++])
		len++;

	for (idx = 0; src[idx]; idx++)
		dest[len++] = src[idx];

	return (dest);
}
