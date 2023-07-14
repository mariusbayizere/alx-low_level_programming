#include <stdlib.h>
#include "main.h"

/**
 * str_length - calculates the length of a string.
 * @str: The input string.
 * Return: The function returns an integer length of the string.
 */
int str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings representing the arguments.
 * Return: The function returns a pointer to concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_length = 0, index = 0, i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += str_length(av[i]) + 1;
	}
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
	
		while (av[i][j] != '\0')
		{
			result[index] = av[i][j];
			index++;
			j++;
		}
		result[index] = '\n';
		index++;
	}
	result[total_length] = '\0';
	return (result);
}
