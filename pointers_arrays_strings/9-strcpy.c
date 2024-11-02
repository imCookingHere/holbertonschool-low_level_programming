#include "main.h"

/**
 * _strcpy - copies string pointed to by src including the
 * terminating null byte to the buffer pointed to by dest
 *
 * @src: pointer to string being copied
 * @dest: pointer to buffer
 *
 * Return: the pointer to dest
 */

	char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	dest = start;
	return (dest);
}
