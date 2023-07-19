#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int len, x;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (x = 0; x < len; x++)
	{
		if (x == len - 1)
		{
			printf("%02hhx\n", ptr[x]);
			break;
		}
		printf("%02hhx ", ptr[x]);
	}
	return (0);
}
