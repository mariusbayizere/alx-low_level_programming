#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two null-terminated strings.
*@s1: Pointer to the first null-terminated string.
*@s2: Pointer to the second null-terminated string.
*Return: The function returns a pointer to the newly allocated string.
*/
char *str_concat(char *s1, char *s2)
{
	int count1 = 0, i, j, coun2 = 0;
	char *marius;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[coun2] != '\0')
	{
		coun2++;
	}
	marius = malloc((count1 + coun2 + 1) * sizeof(char));
	if (marius == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= count1; i++)
	{
		marius[i] = s1[i];
	}
	for (j = 0; j <= coun2; j++)
	{
		marius[count1 + j] = s2[j];
	}
	/*marius[count1 + j] = '\0';*/
	return (marius);
}
