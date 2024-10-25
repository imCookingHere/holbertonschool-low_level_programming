#include "main.h"

/**
 * _isalpha - checks for letters
 * @c: is character to check
 * Return: 1 if c is a letter
 */

	int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
