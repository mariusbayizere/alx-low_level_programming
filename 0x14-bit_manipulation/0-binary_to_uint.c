#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 * @b: receiving string to be converted
 * Return:the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[x])
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		number = (number << 1) + (b[x] - '0');
		x++;
	}
	return (number);
}
