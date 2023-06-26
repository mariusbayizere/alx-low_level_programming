#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 * Return: None.
 */
void rev_string(char *s)
{
	int length = 0;
	int j = 0;
	char temp;

	while (s[j++])
	{
		length++;
	}
	for (j = length -1; j >= length / 2; j--)
	{
		temp =s[j];
		s[j] = s[length - j -1];
		s[length - j -1] = temp;
	}
}
