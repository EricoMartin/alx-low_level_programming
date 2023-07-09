#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would 
 * need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: unsigned int number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorm;
	unsigned long int bits = 0;

	for (xorm = n ^ m; xorm > 0; xorm >>= 1)
		bits += (xorm & 1);

	return (bits);
}
