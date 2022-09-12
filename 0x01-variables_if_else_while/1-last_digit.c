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

	int o;
	o = n;
	int m;
	m = (o % 10);

	if (m > 5)
		printf("Last digit of %d, is (%d) and is greater than 5\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d, is (%d) and is less than 6 and not 0\n", n, m);
	if (m == 0)
		printf("Last digit of %d, is (%d) and is 0\n", n, m);
	/* your code goes there */

	return (0);

}
