#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: will be receive index
 * @n: will be receive n
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
	{
		return (-1);
	}
	result = (n >> index) & 1;
	return (result);
}
