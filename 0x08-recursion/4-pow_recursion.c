#include "main.h"

/**
 * _pow_recursion - Calculate value of 'x' raised to power of 'y' recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
