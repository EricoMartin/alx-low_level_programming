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
	byte b;
	
	while (*(src + 1) != "\0")
	{
		b *= n;
		*(dest + 1) = b;
		*(src + 1);
	}

	return (dest);
}
