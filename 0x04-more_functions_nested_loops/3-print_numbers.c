#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * description - prints numbers
 * Return: return void
 */

void print_numbers(void)
{
	char n;

	n = 0;
	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
