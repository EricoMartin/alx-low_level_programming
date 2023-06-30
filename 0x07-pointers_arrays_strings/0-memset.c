#include  "main.h"

/**
 * _memset - fill the memory with a contsant byte
 * @s: Memory space to be filled
 * @b: the byte to fill the memory with
 * @n: the number of memory spaces
 * Return: A pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **ptr;
	int i;

	ptr = &s;
	i = 0;

	while (i < n)
	{
		**ptr[i] = b;
		i++;
	}
	return (s);
}
