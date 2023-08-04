#include "main.h"

/**
 * getLength - get the lenth of a string
 * 
 * @str: the string to get its length
 *
 * Return: An integer representation of the length
 */

unsigned int getLength(const char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)

	return (i);
}

/** 
 * to_int - converts a character to an integer
 *
 * @c: character to be converted
 * Return: an Integer
 */

unsigned int to_int(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - A function that coverts a binary number
 * to an unsigned int
 *
 * @b: a string of binary Xters to convert to an int
 * Return: unsigned int
 */

unsigned int binary_to_int(const char *b)
{
	unsigned int ans = 0, sum = 0, base = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = getLength(b) - 1; i >= 0; i--)
	{
		sum  = to_int(b[i]);
		if (sum != 0 && sum != 1)
			return (0);

		ans = num * base; 
		base *= 2;
	}	
	return (ans);
}
