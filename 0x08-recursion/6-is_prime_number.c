#include "main.h"

int actal_prime(int n, int i);
/**
 * is_prime_number - Check if a number is a prime number.
 * @n: The number to check for primality.
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actal_prime(n, n - 1));
	}
}
/**
 * actal_prime - Check if a number is a prime number recursively.
 * @n: The number to check for primality.
 * @i: The divisor to check for divisibility.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int actal_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actal_prime(n, i - 1));
	}
}
