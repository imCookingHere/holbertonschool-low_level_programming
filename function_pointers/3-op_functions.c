#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing a by b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	return (0);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of dividing a by b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	return (0);
	}
	return (a % b);
}
