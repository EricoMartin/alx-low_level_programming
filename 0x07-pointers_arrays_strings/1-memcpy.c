#include "main.h"

/**
 * _memcpy - copy n bytes from src to desc
 *
 * @dest: The destination memory
 * @src: The source memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char b;
	int i;

	i = 0;
	while (i < n)
	{
		if (src[i] != "\0")
			dest[i] = src[i];
		dest[i] = "\0";
	}

	return (dest);
}
