#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements in the array
 * @a: the array to be reversed
 */

	void reverse_array(int *a, int n)
{
	int length = n - 1;
	int temp;
	int count = n - 1;

	while (count > (count / 2))
	{
		temp = a[count];
		a[count] = a[count - length];
		a[count - length] = temp;

		count = length - 1;
	}
}
