#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	int  digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		putchar(';');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}