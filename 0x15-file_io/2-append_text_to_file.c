#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of a file.
 * @filename: The name of the file to which text will be appended.
 * @text_content: The text content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int temp;
	int stoke;
	int i = 0;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	temp = open("filename", O_WRONLY | O_APPEND);
	stoke = write(temp, text_content, i);
		if (temp == -1 || stoke == -1)
		{
			return (-1);
		}
	close(temp);
	return (1);
}
