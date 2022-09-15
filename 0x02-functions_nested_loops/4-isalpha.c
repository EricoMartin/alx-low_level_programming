#include "main.h"

/**
 * _isalpha - function alphabetic characters
 * @c: input character
 * description - function that checks for alphabetic character.
 * Return:returns void
 */

int _isalpha(int c)
{
  char low;
  char high;
  int alphabet;

  alphabet = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (high = 'A'; high <= 'Z'; high++)
		{
			if (c == low || c == high)
				alphabet = 1;
		}
	}
	return (alphabet);
}
