#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Description - a function to print alphabets 10 times
 * Return: return oid.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
