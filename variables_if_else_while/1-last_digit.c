#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * File: 1-last_digit.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

/**
 * main - Prints the last digit of a random number
 *	  and ifit is greater than 5, less than 6 or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
