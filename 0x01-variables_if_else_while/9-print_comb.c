#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 *
 * description - prints all possible combinations of single-digit numbers
 *
 * Return: return zero
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
