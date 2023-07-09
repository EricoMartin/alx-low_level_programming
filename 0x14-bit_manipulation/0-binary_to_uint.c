#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @str: the string to check its length
 * Return: Integer
 */

unsigned int _strlen(const char *str)
{
	unsigned int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * binary_to_uint - function that converts a binary string
 * to unsigned integer representation
 *
 * @b: string of binary numbers
 * Return: unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
	{
			decimal += (b[i] - '0') * base;
		}
			base = base * 2;
	}
	return (decimal);
}
