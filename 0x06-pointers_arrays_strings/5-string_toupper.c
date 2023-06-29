#include "main.h"

/**
 * string_toupper - Convert all lowercase characters in a string to uppercase.
 * @si: Pointer to the string to be converted.
 * Return: Pointer to the converted string @si.
 */
char *string_toupper(char *si)
{
	int i;

	for (i = 0; si[i] != '\0'; i++)
	{
		if (si[i] >= 'a' && si[i] <= 'z')
		{
			si[i] = si[i] - 32;
		}
	}
	return (si);
}
