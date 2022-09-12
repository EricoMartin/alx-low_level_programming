#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 *
 * description - print with putchar function
 *
 * Return: return zero (0)
 */

int main(void)
{

	char xter;
	xter = 'a';
	do {
		putchar(xter);
		xter = xter + 1;
	} while (xter <= 'z');
	return 0;
}
