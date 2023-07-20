#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints number of integers separated by a given separator.
 * @separator: Pointer to a string that will be used to separate the numbers.
 * @n: The number of integer arguments to be printed.
 * @...: The variable number of integer arguments to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		va_arg(list, int);
		printf("%d", va_arg(list, int));
		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
