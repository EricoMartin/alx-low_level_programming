#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method entry point
 *
 * description - print numbers
 *
 * Return: return zero
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		num = num + '0';
		putchar(num);
	}
	putchar('\n');
	return (0);
}
