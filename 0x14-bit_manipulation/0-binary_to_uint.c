#include "main.h"

/**
 * _atoi- this function converts a char to an int
 *
 * @c: char to be converted to int
 * Return: an integer representation
 */
unsigned int _atoi(char c)
{
	unsigned int res = 0;

	res = (unsigned int) c - '0';
	return (res);
}

/**
 * _strlen- this function returns the length of a string
 *
 * @str: the string to get its length
 *
 * Return: the length of the string
*/
unsined int _strlen(const char *str(
{
	unsigned int i;

	for (i = 0; str[i] != '\0', i++)

	return (i);
}

/**
 * binary_to_uint - A function that coverts a binary number
 * to an unsigned int
 *
 * @b: binary number to convert to an int
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

	int i;

	unsigned int ans = 0, sum = 0, base = 1;

	if (b == NULL)
		return (0);

	for (i = _strLen(b) - 1; i >= 0; i--)
	{
		sum = _atoi(b[i]);

		if (sum != 0 && sum != 1)
			return (0);

		ans += sum * base;
		base *= 2;
	}
	return (ans);

}
