#include "main.h"

/**
*rot13 - Applies the ROT13 cipher to a string.
*@str: The string to be encoded.
*Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
	int x;
	int y;
	char character1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char character2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == character1[y])
			{
				str[x] = character2[y];
				break;
			}
		}
	}
	return (str);
}
