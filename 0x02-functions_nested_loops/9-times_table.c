#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int table;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		table = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (table < 10)
				_putchar(' ');
			else
				_putchar(table / 10 + '0');

			_putchar(table % 10 + '0');
		}
		_putchar('\n');
	}
}
