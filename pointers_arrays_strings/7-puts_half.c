#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string to be printed
 */

	void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	str = str - (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
