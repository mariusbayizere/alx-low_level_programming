#include "main.h"

/**
 * _puts_recursion - Print a string recursively.
 * @s: Pointer to the string to be printed.
 *
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
