#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long feb;
	int i;
	int n = 50;

	for (i = 3; i <= n; i++)
	{
		printf("%lu ", a);
		feb = a + b;
		a = b;
		b = feb;
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
