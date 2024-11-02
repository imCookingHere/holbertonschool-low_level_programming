#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string output location
 * @src: string to be copied
 * @n: length of the string
 *
 * Return: dest
 */

	char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
