#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
