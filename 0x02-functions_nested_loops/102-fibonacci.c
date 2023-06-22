#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	long long a = 1;
	long long b = 2;
	long long feb;
	int i;
	int n = 50;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a);
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
