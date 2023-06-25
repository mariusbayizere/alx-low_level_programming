#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned long int f = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar(45);
		f = -f;
	}
	if (f / 10)
		print_number(f / 10);
	_putchar((f % 10) + '0');
}
