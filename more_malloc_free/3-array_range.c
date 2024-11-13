#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * array_range - Creates an array of integers ordered from min to max.
 * @min: The minimum value in the range.
 * @max: The maximum value in the range.
 *
 * Return: Pointer to the newly created array.
 *         If min > max, return NULL.
 *         If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* If min is greater than max, return NULL */
	if (min > max)
	return (NULL);

	/* Calculate the number of elements in the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(size * sizeof(int));
	if (array == NULL)
	return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}
