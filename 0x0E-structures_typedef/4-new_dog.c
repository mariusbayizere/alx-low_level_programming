#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string (i.e., the same as dest).
 */
char *_strcpy(char *dest, char *src)
{
	int y, x;

	y = 0;
	while (src[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - Creates a new dog.
 * @name: A pointer to a character (char*) representing the name of the dog.
 * @age: A floating-point number (float) representing the age of the dog.
 * @owner: A pointer to a character (char*) representing the dog's owner.
 *
 * Return: A pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *dog;
	int x, y;

	x = _strlen(name);
	y = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(y + 1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
