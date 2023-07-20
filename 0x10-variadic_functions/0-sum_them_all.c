#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the variable arguments passed to the function.
 * @n: The number of variable arguments.
 * @...: Variable number of arguments to be summed.
 * Return: The sum of all the variable arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
