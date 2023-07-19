#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using function pointer.
 * @name: will receive name as arguments
 * @f: function pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
