#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: will receive pointer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x;
	int temp = 0;
	unsigned long int binary;

	for (x = 63; x >= 0; x--)
	{
		binary = n >> x;
		if (binary & 1)
		{
			_putchar('1');
			temp++;
		}
		else if (temp)
			_putchar('0');
	}
	if (!temp)
	{
		_putchar('0');
	}
}
