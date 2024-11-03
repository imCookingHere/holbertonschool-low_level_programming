#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements in the array
 * @a: the array to be reversed
 */

	void reverse_array(int *a, int n)
{
	int length = n;
	int temp;

	while (length > (n / 2))
	{
		temp = a[length];
		a[length] = a[length - n];
		a[length - n] = temp;

		length = n - 1;
	}
}
