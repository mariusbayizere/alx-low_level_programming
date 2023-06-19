#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	int  digit;
	int i;
	int j;

	for (digit = 0; digit <= 7; digit++)
	{
		for (i = digit + 1; i <= 8; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar(digit + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (digit != 7 && digit != 8 && digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
