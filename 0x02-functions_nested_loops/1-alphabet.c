#include "main.h"

/**
 * print_alphabet - a print function
 * description - A function that prints the alphabets
 *
 * Return: returns void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}
