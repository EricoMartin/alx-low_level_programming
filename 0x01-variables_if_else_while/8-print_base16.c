#include <stdio.h>
#include <stdlib.h>

/** main - main entry point
 *
 * description - prints hexadecimal numbers
 *
 * Return: return zero
 */

int main(void)
{
	int i;
       	int y;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}

	putchar('\n');
	return (0);
}
