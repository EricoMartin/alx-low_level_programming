#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * description -  prints string with putchar function
 *
 * Return: return  0
 */

int main(void)

{

	char xtr = 'a';


	while (xtr <= 'z')
	do {
		putchar(xtr);
		xtr++;
	} while (xtr <= 'z');


	xtr = 'A';

	do {
		putchar(xtr);
		xtr++;
	} while (xtr <= 'Z');

	putchar('\n');
	return (0);
}
