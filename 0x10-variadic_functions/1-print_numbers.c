#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a list of numbers, followed by a new line.
 * @separator: The string to be printed between the numbers (or NULL).
 * @n: The number of integer arguments passed to the function.
 * @...: The variable number of integer arguments to be printed.
 * Return: void (no return value).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;

	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arg, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
