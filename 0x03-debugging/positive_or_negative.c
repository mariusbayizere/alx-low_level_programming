#include "main.h"

/**
 * positive_or_negative - Prints if a number is positive, negative, or zero
 * @i: The number to be checked
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
