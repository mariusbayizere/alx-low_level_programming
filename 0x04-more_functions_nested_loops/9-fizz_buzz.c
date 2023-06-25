#include <stdio.h>

/**
 * main - FizzBuzz program
 *
 * Description: Print number from 1 to 100,replace multiples three with "Fizz",
 *              multiple five with "Buzz",both three and five with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf("  ");
		}
	}
	printf("\n");
	return (0);
}
