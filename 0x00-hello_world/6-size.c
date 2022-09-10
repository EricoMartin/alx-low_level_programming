#include <limits.h>
#include <stdio.h>
#include <string.h>


/**
 * main - print text string
 *
 * description - print sizes of data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int)(CHAR_BIT * sizeof(char)));
	printf("Size of an int: %d byte(s)\n", (int)(CHAR_BIT * sizeof(int)));
	printf("Size of a long int: %d byte(s)\n", (int)(CHAR_BIT * sizeof(long)));
	printf("Size of a long long int: %d byte(s)\n", (int)(CHAR_BIT * sizeof(unsigned long)));
	printf("Size of a float: %d byte(s)\n", (int)(CHAR_BIT * sizeof(float)));
	return (0);

}
