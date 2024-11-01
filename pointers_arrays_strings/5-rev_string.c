#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to be used
 */

	void rev_string(char *s)
{
	int counter = 0;
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
		counter++;
	}
	int rev[len];
	int *revptr;
	revptr = &rev[0];

	s--;
	while (counter != 0)
	{
		*revptr = *s;
		s--;
		counter--;
	}
	s++;
	while (*s != '\0')
	{
		*s = *revptr;
		s++;
		revptr++;
	}
	_putchar('\n');
}
