#include "main.h"

/**
 * _factorial - Get factorial of a number
 * @n: Integer value 
 * Return: Integer value
 */

int factorial(int n)
{
	int num;
	if (n == 0 || n == 1)
	{
		return (1);
	}

	num = factorial(n) + factorial(n-1);
	n--;
	return (num);
}
