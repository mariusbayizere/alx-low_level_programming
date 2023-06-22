#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long long a = 1;
	unsigned long long b = 2;
	unsigned long long feb;
	int i;
	int n = 50;

	for (i = 1; i <= n; i++)
	{
		printf("%llu ", a);
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
