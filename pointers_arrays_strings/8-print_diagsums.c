#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: matrix to be used for function
 * @size: size of the array
 *
 * Return: 0
 */

	void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d", d1, d2);
	printf("\n");
}
