#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point
 *
 * description - prints the lowercase alphabet in reverse
 *
 * Return: returns zero
 */

int main(void)

{

		char c = 'z';

		while (c >= 'a')
		{

			putchar(c);
			c--;
		}
		putchar('\n');
		return (0);
}
