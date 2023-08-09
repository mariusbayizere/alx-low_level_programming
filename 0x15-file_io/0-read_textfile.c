#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read and print a text file to the standard output.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters read and printed, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t temp, ptr, next;

	temp = open(filename, O_RDONLY);
	if (temp == -1)
	{
		return (0);
	}
	file = malloc(sizeof(char) * letters);
	next = read(temp, file, letters);
	ptr = write(STDOUT_FILENO, file, next);
	free(file);
	close(temp);
	return (ptr);
}
