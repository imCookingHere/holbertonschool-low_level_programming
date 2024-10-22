#include <stdlib.h>
#include <time.h>
/*
 * File: 4-puts.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

int main(void)
/**
 * checks if number is negative, positive or 0 and prints: "n is positive,
 *                n is negative or n is zero.
 *
 * Return: Always 0.
 */	
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	return (0);
}
