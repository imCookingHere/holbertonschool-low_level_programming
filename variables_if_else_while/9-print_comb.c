#include <stdio.h>
/*
 * File: 5-print_numbers.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

/**
 * main - Prints numbers 0 through 9 followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char nmbr = '0';
	char nl = '\n';

	for (nmbr = '0'; nmbr <= '9'; nmbr++)
	{
	putchar(nmbr);
	if (nmbr == '9')
	continue;

	putchar(',');
	putchar(' ');
	}
	putchar(nl);
	return (0);
}