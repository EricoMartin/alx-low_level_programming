#include "main.h"

/**
 * _islower.c - a function that checks for lowercase characters
 *
 * description - checks if a character is lowercase
 *
 * Return: returns void
 */

int _islower(int c)
{
	int result;

	if (c > 90 && c <= 116)
		result = 1;
	else
		result = 0;

	return (result);
}
