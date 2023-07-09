#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index
 *
 * @n: the number to check
 * @index: the index to find its value
 * Return: the value of the bit at index index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 0;
	int result;

	if (index > (sizeof(num) * 8))
	{
		return (-1);
	}

	result = ((n >>  index) & 1);
	return (result);
}
