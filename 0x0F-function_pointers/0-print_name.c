#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to the name string
 * @f: Function pointer to the printing function
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
