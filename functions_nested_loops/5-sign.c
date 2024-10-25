#include "main.h"

/**
 * 5-sign.c: Prints +, 0 or - corrospoding to whether or not the
 * number is >, < or = to 0
 * @n: is the int to check
 * Return: 1 and prints + if the n is > zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is < zero
 */

	int print_sign(int n)
{
	char plus = '+';
	char zero = '0';
	char minus = '-';

	if (n < 0)
	{
		_putchar(minus);
	} else if (n == 0)
	{
		_putchar(zero);
	} else
	{
		_putchar(plus);
	}

	return (0);

}
