#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 * Return: A pointer to first occurrence of character 'c' in the string 's',
 *         or NULL if the character not found.
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
