#include "main.h"

/**
 *  print_rev - print reverse string
 *  @s: string input
 *
 *  Return: return 0.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
