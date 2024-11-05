#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memeory to be filled
 * @b: data to be inputted
 * @n: number of bytes to be filled in memory
 *
 * Return: s
 */

	char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i = 0;
	int m = n;

	while (i < m)
	{
		*s = b;
		i++;
		s++;
	}
	s = temp;
	return (s);
}
