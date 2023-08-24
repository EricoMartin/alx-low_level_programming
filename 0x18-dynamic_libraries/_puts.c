#include "main.h"

/**
 * _puts - print to stdout
 * @str: pointer to string input
 * Return: return zero
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
