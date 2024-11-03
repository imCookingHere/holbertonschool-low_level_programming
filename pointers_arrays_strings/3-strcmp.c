#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: r
 */

	int _strcmp(char *s1, char *s2)
{
	int ta1 = 0, ta2 = 0;

	while (*s1 != '\0')
	{
		s1++;
		ta1++;
	}
	while (*s2 != '\0')
	{
		s2++;
		ta2++;
	}
	s1 = 0;
	s2 = 0;

	if (ta1 > ta2)
	{
		return (-13);
	}
	else if (ta2 > ta1)
	{
		return (13);
	}
	else
	{
		return (0);
	}
}
