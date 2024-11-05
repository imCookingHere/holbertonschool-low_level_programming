#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to be copied into
 * @src: memory to be copied
 * @n: number of bytes to copy into
 *
 * Return: dest
 */

	char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int m = n;

	while (a < m)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
