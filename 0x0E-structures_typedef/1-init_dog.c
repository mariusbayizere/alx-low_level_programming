#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog.
 * @d: A pointer to a struct dog.
 * @name: A pointer to a character (char*) representing the name of the dog.
 * @age: A floating-point number (float) representing the age of the dog.
 * @owner: A pointer to a character (char*) representing the dog's owner.
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	/*return (d);*/
}
