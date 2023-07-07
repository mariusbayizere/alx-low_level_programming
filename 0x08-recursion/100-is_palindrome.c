#include "main.h"
int _strlen(char *s);
int is_palindrome_helper(char *s, int x, int y);
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: Pointer to the string to be checked.
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	return (is_palindrome_helper(s, 0, length - 1));
}
/**
 * is_palindrome_helper - Helper function to check if a string is recursively.
 * @s: Pointer to the string to be checked.
 * @x: The starting index for comparison.
 * @y: The ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	else if (s[x] != s[y])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, x + 1, y - 1));
	}
}
/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string for which to calculate the length.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
