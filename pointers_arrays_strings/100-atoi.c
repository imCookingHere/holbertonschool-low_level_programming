#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to be converted to interger
 * Return: integer
 */

	int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)
	{
	if (*s == '-')
	sign *= -1;
	else if (*s == '+')
	sign *= 1;
	else if (*s >= '0' && *s <= '9')
	{
	started = 1;
	num = num * 10 + (*s - '0');
	}
	else if (started)
	break;
	s++;
	}
	return (sign * num);
}
