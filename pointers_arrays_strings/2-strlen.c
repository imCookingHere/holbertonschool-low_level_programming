#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to be used
 * Return: len
 */

	int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
