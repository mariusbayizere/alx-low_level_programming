#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + 48);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
