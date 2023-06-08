#include "main.h"
#include <stdio.h>

int is_prime(int n, int m);


/**
 * is_prime_number -  returns a prime number
 * @n: Integer
 * Return: Integer
 */

int is_prime_number(int n)
{
	return(is_prime(n, 1));
}


/**
 * is_prime - Check if a number is a prime
 * @n: integer to check
 * @m: integer for iteration
 * Return: Integer value
 */

int is_prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (n % m == 0 && m > 1)
		return(0);
	if((n/m) < m)
		return (1);

	return(is_prime(n, m + 1));
}
