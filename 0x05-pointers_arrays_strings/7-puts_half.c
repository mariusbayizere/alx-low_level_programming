#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 * Return: None.
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i+= 1;
	}
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n++;
	}
	else
	{
		n = i / 2;
		for (; n < i; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
