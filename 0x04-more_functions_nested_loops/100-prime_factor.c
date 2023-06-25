#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int j;

	for (j = 3; j < 782849; j = j + 2)
	{
		while ((number % j == 0) && (number != 1))
			number = number / j;
	}
	printf("%lu\n", number);
	return (0);
}
