#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints the name
 * @name: name to be printed
 * @f: function pointer passed as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}
