#include "main.h"

/**
 * _length - find the length of @n
 *
 * @n: value to find its length
 *
 * Return: length
*/
int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{


		length++;
		n >>= 1;
	}

	length--;

	return (length);
}

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0)
		mask <<= length;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
