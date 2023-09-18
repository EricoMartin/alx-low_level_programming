#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character
 * @c: integer input
 * description - check for uppercase
 * Return: returns 1 if upper 0 if lower
 */

int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
		res = 1;
	else
		res = 0;
	return (res);
}
