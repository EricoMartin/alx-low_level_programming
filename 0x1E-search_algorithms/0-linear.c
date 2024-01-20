#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - a function that searches for
 * a value in an array of int
 *
 * @array: a pointer to the first element
 * @size: is the number of elements
 * @value: is the value to search for
 *
 * Return: an int value in the array
 * Description: function that searches for a value
 */

int linear_search(int *array, size_t size, int value)
{
	int count = 0;

	if (array == NULL)
		return (-1);
	while (array[count] < (int) size)
	{
		if (array[count] == value)
		{
			printf("Value checked array[%u] = [%d]\n", count, array[count]);

			return (count);
		}
		count++;
	}
	return (-1);
}
