#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * Return: 1 = is uppercase 0 = otherwise
 * @c: int to be checked
 */

	int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
