#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: Pointer to the string to be printed in reverse.
 * Return: None.
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
