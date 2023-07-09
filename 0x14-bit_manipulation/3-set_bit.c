#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at an index
 *
 * @n: an array of digits 1's and 0's
 * @index: an index to set its value to 1
 * Return: 1 if success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	
	bin <<= index;
	*n = (*n | bin);
	
	return (1);
}
