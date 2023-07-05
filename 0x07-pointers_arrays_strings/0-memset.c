#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 *
 * @s: Pointer to the memory block to be filled.
 * @b: Value to be set. It is treated as an unsigned char.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory block 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
