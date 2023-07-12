#include <stdio.h>
#include <stdlib.h>

/**
 * isDigit - Check if a character is a digit.
 * @ch: The character to be checked.
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int isDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x;
	int y;
	int c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		y = 0;
		while (argv[x][y])
		{
			if (!isDigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		c = atoi(argv[x]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
