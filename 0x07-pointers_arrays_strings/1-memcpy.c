#include "main.h"

/**
 * _memcpy - Copy a specified number of bytes from source to destination.
 *
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int j = n;

	for (; x < j; x++)
	{
		dest[x] = src[j];
		n--;
	}
	return (dest);
}
