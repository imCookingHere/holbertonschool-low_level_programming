#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * Return: 1 = is digit 0 = otherwise
 * @c: int to be checked
 */

	int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
