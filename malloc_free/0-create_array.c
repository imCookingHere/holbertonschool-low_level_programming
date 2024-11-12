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
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == 0)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
