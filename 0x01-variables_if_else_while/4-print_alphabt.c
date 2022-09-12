#include <stdio.h>

/**
 * main - main function
 *
 * description -exclude strings when printed
 *
 * Return: return zero
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

		c++;
	}


	putchar('\n');
	return (0);
}
