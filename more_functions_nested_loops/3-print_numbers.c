#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 */

	void print_numbers(void)
{
	int i, c = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar((c % 10) + '0');
		c++;
	}
	_putchar ('\n');
}
