#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 followed by a new line
 * except for the numbers 2 and 4
 */

	void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c == 2 || c == 4)
		{
		c++;
		}
		else
		{
		_putchar((c % 10) + '0');
		c++;
		}
	}
	_putchar('\n');
}
