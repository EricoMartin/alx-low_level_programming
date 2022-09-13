#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 *
 * description - prints all single digit numbers of base 10 starting from 0
 *
 * Return: return zero
 */

int main(void)
{

	char num = '0';

	do {
		putchar(num);
		num++;
	} while (num <= '9');

	putchar('\n');
	return (0);
}
