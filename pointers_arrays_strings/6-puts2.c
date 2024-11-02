#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character followed by a new line
 *
 * @str: pointer to the string to print
 *
 * Return: every 2nd character in the string starting with the firt
 */

	void puts2(char *str)
{
	int count = 0;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = str - length;
	while (count < length)
	{
		_putchar(*str);
		str = str + 2;
		count = count + 2;
	}
	_putchar('\n');
}
