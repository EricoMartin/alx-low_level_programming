#include "main.h"                                                               

/**                                                                              * main - entry point                                                            * description - A function that prints the alphabets                            *                                                                               * Return: returns zero                                                          */

void print_alphabet(void)
{
	char c;

	c = 'a';
	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}
