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
	char **ptr;
	unsigned int i;

	ptr = &s;
	i = 0;
	while (i < n)
	{
	**ptr = b;
	i++;
	}

	return (s);
}
