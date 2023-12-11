#include "main.h"

/**
 * _puts - Prints a string to the standard output.
 * @str: Pointer to the string to be printed.
 * Return: None.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
