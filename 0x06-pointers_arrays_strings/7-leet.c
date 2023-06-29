#include "main.h"

/**
*leet - Converts a string to "leet" or "1337" speak.
*@str: The string to be converted.
*Return: A pointer to the converted string.
*/
char *leet(char *str)
{
	int x;
	int y;
	char number1[] = "aAeEoOtTlL";
	char number2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == number1[y])
			{
				str[x] = number2[y];
			}
		}
	}
	return (str);
}
