#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *allocate_memory(char *temp);

/**
 * turn_off_file - function that will help to close file
 * @temp: will receiving temp variable
 * Return: void.
 */
void turn_off_file(int temp)
{
	int x;

	x = close(temp);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", temp);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @n: Number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 * Return: Returns an integer exit code to indicate the program's result.
 */
int main(int n, char *argv[])
{
	int cursor, ptr, x, y;
	char *temp;

	if (n > 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	temp = allocate_memory(argv[2]);
	cursor = open(argv[1], O_RDONLY);
	x = read(cursor, temp, 1024);
	ptr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (cursor == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(temp);
			exit(98);
		}
		y = write(ptr, temp, x);
		if (ptr == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(temp);
			exit(99);
		}
		x = read(cursor, temp, 1024);
		ptr = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(temp);
	turn_off_file(cursor);
	turn_off_file(ptr);
	return (0);
}
/**
 * allocate_memory - Allocates memory for a character array.
 * @temp: The string that will be used  size  the memory block.
 * Return: A pointer to the allocated memory on success,
 */
char *allocate_memory(char *temp)
{
	char *ptr;

	ptr = (char *) malloc(1024 * sizeof(char));
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", temp);
		exit(99);
	}
	return (ptr);
}
