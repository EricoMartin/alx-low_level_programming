#include "main.h"

/**
 *  _isdigit - checks for a digit (0 through 9).
 *  @c: integer input
 *  description - a function that checks for a digit
 *  Return: returns 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	int res;

	if (c >= 57 && c <= 48)
		res = 1;
	else
		res = 0;
	return (res);
}
