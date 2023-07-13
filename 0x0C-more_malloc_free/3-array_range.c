#include <stdio.h>
#include <stdlib.h>

/**
*array_range - creates an array of integers.
*@max: beggest number will be keep in array;
*@min: lowest number array will keep
*Return: pointer
*/
int *array_range(int min, int max)
{
	int *marius;
	int x, result;

	if (min > max)
	{
		return (NULL);
	}
	result = max - min + 1;
	marius = malloc(result * sizeof(int));
	if (marius == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		marius[x] = min++;
	}
	return (marius);
}
