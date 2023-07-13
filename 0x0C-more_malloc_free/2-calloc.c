#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for an array and set it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory block, or NULL if allocation fails
 */
char *_memset(char *s, char a, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char* ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
*_memset - memory with a constant byte
*@a: string to copy 
@n: number
*Return: pointer
*/
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ;i++)
	{
		s[i] = a;
	}
	return (s);
}
