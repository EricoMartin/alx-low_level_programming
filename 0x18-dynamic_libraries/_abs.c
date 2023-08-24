#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 * @r: integer input
 * description - This function computes the absolute value of an integer
 * Return: Absolute value of integer r
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
