#include <stdio.h>
/**
 * main - main function
 * Description -  prints string in lowercase and uppercase
 * Return: 0
 */
 
int main(void)
{
	char xtr = 'a';
	
  do {
		putchar(xtr);
		xtr++;
	} while (xtr <= 'z');

	xtr = 'A';

	do {
		putchar(xtr);
		++;
	} while (xtr <= 'Z');

	putchar('\n');
	return (0);
}
