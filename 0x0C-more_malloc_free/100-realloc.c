#include <stdio.h>
#include <stdlib.h>

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: previsousl pointer
*@new_size: new_size to allocate memory
*@old_size: old size of allocated pointer
*Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *marius;
	char *temp;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	marius = malloc(new_size);
	if (!marius)
	{
		return (NULL);
	}
	temp = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			marius[x] = temp[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			marius[x] = temp[x];
	}
	free(ptr);
	return (marius);
}
