#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* more headers goes there */

/**
 *
 * main - main function declaration
 * 
 * description: generate random numbers
 *
 * Return: return zero (Nothing)
 */

/* betty style doc for function main goes there */



int main(void)

{


	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("Last digit of %d, is (%d % 10) and is greater than 5\n", n);
	if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d,is (%d % 10) and is less than 6 and not 0\n", n);
	if ((n % 10) == 0)
		printf("Last digit of %d, is (%d % 10) and is 0\n", n);
	/* your code goes there */

	return (0);

}
