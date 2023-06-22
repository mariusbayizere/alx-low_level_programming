#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @x: The number of rows and columns in the times table
 */
void print_times_table(int x)
{
	int i;
	int j;
	int table;

	if (x < 0 || x > 15)
		return;
	for (i = 0; i <= x; i++)
	{
		for (j = 0; j <= x; j++)
		{
			table = i * j;
			printf("%d", table);
			if (j != x)
			{
				printf(", ");
				if (table < 10)
				{
					printf(" ");
				}
				if (table < 100)
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
