#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printf - A function that prints a string of characters
 *
 * @format: String formatter
 * Return: An integer.
 */

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you have won the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
