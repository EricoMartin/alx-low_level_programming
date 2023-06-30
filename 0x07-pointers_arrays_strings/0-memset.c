#include "main.h"

/**
 * _memset -fills memory area with a constant byte
 * @s: memory area
 * @b: a byte to fill the memory with
 * @n: an unsigned integer
 * Return: returns a pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
	*(s) = b;
	i++;
	}

	return (s);
}
