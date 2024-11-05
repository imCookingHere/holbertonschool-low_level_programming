#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring, otherwise NULL
 */

	char *_strstr(char *haystack, char *needle)
{
	int i = 0, n = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i + n] == needle[n] && needle[n] != '\0')
		{
			n++;
		}
		if (needle[n] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
