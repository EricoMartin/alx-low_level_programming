#include "main.h"

/**
 * _strlen_recursion - returns 1 if a string is a palindrome and 0 if not
 * @s: String of xters.
 * Return: Integer length of string
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	} else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * comparator - compares xters
 * @s: string
 * @n: small number
 * @m: big number
 * Return: integer
 */

int comparator(char *s, int n, int m)
{
	if (*(s + n) == *(s + m))
	{
		if (n == m || n == m + 1)
			return (1);
		return (0 + comparator(s, n + 1, m - 1);
	}
	return (0);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: String
 * Return: Integer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
