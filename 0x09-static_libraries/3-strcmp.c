#include "main.h"

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: (s1[j] - s2[j])
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
