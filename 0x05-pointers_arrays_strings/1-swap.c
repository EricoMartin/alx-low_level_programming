#include "main.h"

/**
 * swap_int - swap integer
 *
 * @a: first integer input
 * @b: second integer input
 * Return: return 0.
 */

void swap_int(int *a, int *b)
{
	int *temp;
	int n;

	n = 0;
	temp = &n;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
