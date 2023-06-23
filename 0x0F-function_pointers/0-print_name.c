#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void printer(char* str)
{
	if (str)
	{
		printer(str);
	}
}

void print_name(char *name, void (*f)(char *))
{
	print_name(*name, printer(*name));

}
