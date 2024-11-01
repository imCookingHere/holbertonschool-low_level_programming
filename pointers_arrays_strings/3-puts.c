#include "main.h"

/**
 * _puts - puts a string, followed bya  new line to stout
 * @str: pointer to be used
 */

	void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
