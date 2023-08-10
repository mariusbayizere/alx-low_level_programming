#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that creates a file.
 * @filename: will receive file name
 * @text_content: will receive pointer to string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int temp;
	int stock;
	int i = 0;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '0')
		{
			i++;
		}
	}
	temp = open("filename", O_CREAT | O_RDWR | O_TRUNC, 0600);
	stock = write(temp, text_content, i);
		if (temp == -1 || stock == -1)
		{
			return (-1);
		}
	close(temp);
	return (1);
}
