#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result  = 0;
	int coins [5] = { 25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5; x++)
	{
		while (y >= coins[x])
		{
			result = result + 1;
			y = y - coins[x];
		}
		}
	printf("%d\n", result);
	return (0);
}
