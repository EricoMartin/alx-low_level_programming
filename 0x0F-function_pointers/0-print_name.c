#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char* str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void printer(char* str)
{
	char *s;
	int len;

	len = _strlen(str);
	s = malloc(sizeof(char) * len);
	s = &str[len];

	while(len > 0)
	{
		printf(*s);
		len--;
	}
}

void print_name(char *name, void (*f)(char *))
{
	print_name(*name, printer(*name));

}
