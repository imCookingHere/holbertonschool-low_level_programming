#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: p otherwise NULL if str = NULL
 */

	char *_strdup(char *str)
{
	int len = 0;
	int count = 0;
	char *a = str;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*a != '\0')
	{
		len++;
		a++;
	}
	p = malloc(len * sizeof(str));

	while (count < len)
	{
		p[count] = str[count];
		count++;
	}
	return (p);
	free(p);
}
