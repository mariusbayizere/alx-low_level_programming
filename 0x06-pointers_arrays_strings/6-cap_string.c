#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @si: Pointer to the string to be capitalized.
 * Return: (si)
 */
char *cap_string(char *si)
{
	int i = 0;

	while (si[i])
	{
		while (!(si[i] >= 'a' && si[i] <= 'z'))
			i++;
		if (si[i - 1] == ' ' ||
				si[i - 1] == '\t' ||
				si[i - 1] == '\n' ||
				si[i - 1] == ',' ||
				si[i - 1] == ';' ||
				si[i - 1] == '.' ||
				si[i - 1] == '!' ||
				si[i - 1] == '?' ||
				si[i - 1] == '"' ||
				si[i - 1] == '(' ||
				si[i - 1] == ')' ||
				si[i - 1] == '{' ||
				si[i - 1] == '}' ||
				i == 0)
			si[i] = si[i] - 32;
		i++;
	}
	return (si);
}
