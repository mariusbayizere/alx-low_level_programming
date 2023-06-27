#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The stringi to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int result = 0;
	int min = 1;
	int i = 0;

	while (s[c])
		if (s[c] == 45)
		{
			min *= -1;
		}
	while (s[c] >= 48 && s[c] <= 57)
	{
		i = 1;
		result = (result * 10) + (s[c] - '0');
		c++;
		if (i == 1)
		{
			break;
		}
		c++;
	}
	result *= min;
	return (result);
}
