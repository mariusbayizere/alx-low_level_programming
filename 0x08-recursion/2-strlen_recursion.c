#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively.
 *
 * @s: Pointer to the string for which to calculate the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
