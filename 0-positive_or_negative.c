#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */

/**
 * main - main function declaration
 *
 * description - generate random numbers
 *
 * Return - return zero (Nothing)
 */

/* betty style doc for function main goes there */

int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n > 0)
		printf("%d is positive", n);
	if(n < 0)
		printf("%d is negative", n);
	if(n == 0)
		printf("%d is zero", n);
	/* your code goes there */

	return (0);
}
