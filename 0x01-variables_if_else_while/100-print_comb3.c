#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	int  digit;
	int i;

	for (digit = 0; digit < 9; digit++)
	{
		for (i = digit + 1; i < 10; i++)
		{
			putchar(digit + '0');
			putchar(i + '0');
			if (digit != 8 && digit != 9)
			{
				putchar(';');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
