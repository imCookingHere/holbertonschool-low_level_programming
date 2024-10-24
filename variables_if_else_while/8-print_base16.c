#include <stdio.h>
/*
 * File: 8-print_base16.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

/**
 * main - Prints all numbers of base 16 in lowercase followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char nmbr = '0';
	char hexa = 'a';
	char nl = '\n';

	for (nmbr = '0'; nmbr <= '9'; nmbr++)
	putchar(nmbr);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	putchar(hexa);
	putchar(nl);
	return (0);
}
