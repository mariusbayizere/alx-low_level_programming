#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times to print the table.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x;
	int y;
	int table;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			table = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (table < 10)
					_putchar(' ');
				if (table < 100)
					_putchar(' ');
			}
			if (table < 10)
				_putchar(table + '0');
			else if (table < 100)
			{
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}
			else
			{
				_putchar(table / 100 + '0');
				_putchar((table / 10) % 10 + '0');
				_putchar(table % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
