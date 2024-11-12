#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: memory to be allocated
 * @c: character to be initialized
 * Return: pointer to the array OR  NULL if size = 0
 */

	char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
