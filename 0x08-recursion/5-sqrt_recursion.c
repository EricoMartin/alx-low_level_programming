#include "main.h"
#include <stdio.h>

int _sqrt(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer number
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns square root of a number
 * @n: Integer value
 * @m: Integer value
 * Return: Integer
 */

int _sqrt(int n, int m)
{
	int sq;

	sq =  m * m;
	if (sq > n)
	{
		return (-1);
	}

	if (sq == n)
	{
		return (m);
	}
	return (_sqrt(n, m + 1));
}
