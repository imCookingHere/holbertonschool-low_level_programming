#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to be used
 */

	void print_rev(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		s++;
		counter++;
	}

	s--;

	while (counter != 0)
	{
		_putchar(*s);
		s--;
		counter--;
	}
	_putchar('\n');
}
