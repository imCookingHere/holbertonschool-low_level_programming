#include "main.h"

/**
 * print_diagonal - draws a diagnoal line on the terminal
 * @n: is the int to be placed
 */

	void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
