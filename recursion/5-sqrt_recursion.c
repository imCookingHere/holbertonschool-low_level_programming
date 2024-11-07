#include "main.h"

/**
 * sqr2 - calculates the square root of a number by evaluating 1 to n
 * @a: is equal to n
 * @b: number that iterates from 1 to n
 * Return: 1, otherwise -1
 */

	int sqr2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqr2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number of integer
 * Return: sqr2 otherwise -1
 */

	int _sqrt_recursion(int n)
{
	return (sqr2(n, 1));
}
