#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory, initialized to zero.
 *         If nmemb or size is 0, returns NULL.
 *         If malloc fails, returns NULL.
 */

	void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int total_size, i;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
	return (NULL);

	/* Calculate total size required */
	total_size = nmemb * size;

	/* Allocate memory */
	memory = malloc(total_size);
	if (memory == NULL)
	return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < total_size; i++)
	memory[i] = 0;

	return (memory);
}
