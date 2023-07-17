#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  user-defined structure that represents a dog.
 * @name: pointer to a character (char*) representing the name of the dog.
 * @float: floating-point number (float) representing the age of the dog.
 * @owner: pointer to a character (char*) representing the the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef struct dog dog_t;
 * The typedef statement simplifies the syntax and provides better
 * readability when working with structures.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

