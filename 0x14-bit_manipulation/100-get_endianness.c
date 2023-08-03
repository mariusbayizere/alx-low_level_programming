#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: void.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *temp = (char *) &x;

	return (*temp);
}
