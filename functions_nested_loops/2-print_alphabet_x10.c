#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lower case
 * followed by a new line.
 */

	void print_alphabet_x10(void)
{
	int i = 0, c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}