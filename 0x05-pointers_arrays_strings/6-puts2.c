#include "main.h"
/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 * Return: None.
 */
void puts2(char *str)
{
	int length = 0;
	int n = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		length++;
	}
	n = length - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
