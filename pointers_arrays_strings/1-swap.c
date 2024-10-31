#include "main.h"

/**
 * swap_int - Swaps the values of two inegers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

	void swap_int(int *a, int *b)
{
	int a1, b1;

	a1 = *a;
	b1 = *b;
	*a = b1;
	*b = a1;
}
