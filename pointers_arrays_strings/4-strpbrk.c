#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: characters to look for
 *
 * Return: located
 */

	char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
