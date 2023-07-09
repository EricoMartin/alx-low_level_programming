#include "main.h"

/**
 * binary_to_uint - function that converts a binary string
 * to unsigned integer representation
 *
 * @b: string of binary numbers
 * Return: unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (int i = strlen(b) - 1; i >= 0; i--)
	{
		int temp, base;
	
		base = 1;
		if (b[i] != "1" && b[i] != "0")
			return (0);

		if (b[i] == "1")
		{	
			decimal += base;
		}
			base = base * 2;
	}
	return (decimal);
}
