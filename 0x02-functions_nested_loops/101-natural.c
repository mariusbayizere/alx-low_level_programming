#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
#include <stdio.h>

int main(void)
{
	int x;
	int end = 1024;
	int sum = 0;

	for (x = 1; x < end; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	printf("The sum of multiples of 3 or 5 below %d is: %d\n", end, sum);
	return (0);
}
