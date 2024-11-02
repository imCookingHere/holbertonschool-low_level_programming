#include "main.h"
#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers followed by a nl
 * @a: pointer at array
 * @n: arrays to be counted
 */

	void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
	if (count == n - 1)
	{
		printf("%d", *a);
		count++;
	}
	else
	{
		printf("%d, ", *a);
		a++;
		count++;
	}
	}
	printf("\n");
}
