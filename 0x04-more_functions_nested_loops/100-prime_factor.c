#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143;
	long int j;
	long int high;

	high = high - 1;
	while (number % 2 == 0)
	{
		high = 2;
		number /= 2;
	}
	for (j = 3; j <= sqrt(number); j = j + 2)
	{
		while (number % j == 0)
		{
			high = j;
			number /= j;
		}
	}
	if (number > 2)
		high = number;
	printf("%ld\n", high);

	return (0);
}
