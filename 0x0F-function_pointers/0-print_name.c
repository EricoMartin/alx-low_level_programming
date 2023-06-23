#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printer - print the string
 * @str: string to print
 * return: Nothing
 */

void printer(char *str)
{
	if (str)
	{
		printer(str);
	}
}

/**
 * print_name - print a name
 * @name: name to print
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	print_name(*name, printer(*name));

}
