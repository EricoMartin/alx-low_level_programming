#include "main.h"

/**
 * clear_bit - function to that sets the value of a bit to 0 at a given index.
 *
 * @n: array of digits 0's and 1's.
 * @index: index to be set.
 *
 * Return: 1 if success -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(num) * 8))
		return (-1);

	if ((num << index) & 1 == 1)
		*n &= ~(num << index);

	return (1);
}
