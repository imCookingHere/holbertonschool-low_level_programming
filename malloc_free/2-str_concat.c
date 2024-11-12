#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: something
 */

	char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	while (count1 < len1)
	{
		p[count1] = s1[count1];
		count1++;
	}
	while (count2 < len2)
	{
		p[count1] = s2[count2];
		count1++;
		count2++;
	}
	p[count1] = '\0';
	return (p);
}
