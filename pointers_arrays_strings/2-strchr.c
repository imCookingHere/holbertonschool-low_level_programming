#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s:string to search
 * @c: character to find
 *
 * Return: locate if character is found, otherwise NULL
 */

	char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (c == s[a])
		{
			char *locate = &s[a];

			return (locate);
		}
		a++;
	}
	if (c == '\0')
	{
		char *locate = &s[a];

		return (locate);
	}
	return (0);
}
