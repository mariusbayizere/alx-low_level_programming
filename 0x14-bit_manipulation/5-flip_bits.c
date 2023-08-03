#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Counts the number of differing bits between two numbers.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of differing bits (bits set to 1) between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int drag = 0;
	unsigned long int least_significant_bit;
	unsigned long int XOR = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		least_significant_bit = XOR >> x;
		if (least_significant_bit & 1)
			drag++;
	}
	return (drag);
}
