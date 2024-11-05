#include "main.h"

/**
 * _strspn - Gets the length of a prefex substring
 * @s: string to be checked against
 * @accept: characters to look for
 *
 * Return: count
 */

	unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
