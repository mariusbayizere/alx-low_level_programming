#include "main.h"

/**
 * set_string - Set the value of a pointer to a string.
 * @s: Pointer to the pointer to be updated.
 * @to: Pointer to the string to set 's' to.
 *
 * Return: None.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
