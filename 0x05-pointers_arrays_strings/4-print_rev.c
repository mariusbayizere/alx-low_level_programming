#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: Pointer to the string to be printed in reverse.
 * Return: None.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
