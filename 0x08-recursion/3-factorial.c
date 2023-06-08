#include "main.h"

/**
 * _factorial - Get factorial of a number
 * @n: Integer value 
 * Return: Integer value
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	int num = factorial(n) + factorial(n-1);
	n--;
	return (num);
}
