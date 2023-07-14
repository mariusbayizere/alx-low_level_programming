#include "main.h"
#include <stdlib.h>

/**
*_strdup - creates a duplicate copy of a null-terminated string.
*@str: Pointer to the null-terminated string to be duplicated.
*Return: The function returns a pointer to the newly allocated string.
*/
char *_strdup(char *str)
{
	char *ptr;
	int count = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	ptr = malloc(count + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= count; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
