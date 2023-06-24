#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 *
 * Description: This function prints the numbers from 0 to 14, ten times,
 *              with each number on a separate line.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
	_putchar('\n');
	}
}
