#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments passed.
 * @argv: An array of strings containing the command-line arguments.
 * Return: The exit status of the program.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = argv[2];
	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ptr == 47 || *ptr == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ptr)(num1, num2));
	return (0);
}
