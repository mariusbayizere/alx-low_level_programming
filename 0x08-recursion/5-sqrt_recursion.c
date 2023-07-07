#include "main.h"

int sqrt_recursive_helper(int n, int x);

/**
 *_sqrt_recursion - square root of a number
 *@n: number to calculate the square root
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive_helper(n, 0));
	}
}
/**
*sqrt_recursive_helper - recurse to find the natural number
*@n: number to calculate the square
*@x: iterator
*Return: square root
*/
int sqrt_recursive_helper(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (sqrt_recursive_helper(n, x + 1));
	}
}
