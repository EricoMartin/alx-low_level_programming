#include  "main.h"

/**
 * get_endianess - function that checks the endianness.
 *
 * @void: nothing
 * Return: integer 1 if big endian or 0 otherwise
 */

int get_endianness(void)
{
	unsigned long int num;
	char *c = (char) &num;

	return (int) *c;
}
