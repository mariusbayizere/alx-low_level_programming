#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int feb;
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
