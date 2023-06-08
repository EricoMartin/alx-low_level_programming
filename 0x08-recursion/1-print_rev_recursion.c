#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: set of characters
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
