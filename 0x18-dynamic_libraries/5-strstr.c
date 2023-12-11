#include "main.h"

/**
 * _strstr - Locate the first occurrence of a substring in a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the substring within 'haystack',
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *ptr = needle;

		while (*x == *ptr && *ptr != '\0')
		{
			x++;
			ptr++;
		}
		if (*ptr == '\0')
			return (haystack);
	}
	return (0);
}
