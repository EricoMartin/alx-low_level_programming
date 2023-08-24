#include <unistd.h>

/**
 * _putchar - put character
 * @c: character value
 * Return: Integer value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
