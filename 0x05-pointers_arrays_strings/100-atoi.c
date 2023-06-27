
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int count = 1;
	int power = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			count *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			power = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (power == 1)
		{
			break;
		}
		i++;
	}
	result *= count;
	return (result);
}
