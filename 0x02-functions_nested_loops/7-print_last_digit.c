#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: prints the last digit of a number.
 *
 * Return: the last digit @num.
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num %10;
	if (lastdigit <0)
	{
		lastdigit= -lastdigit;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
