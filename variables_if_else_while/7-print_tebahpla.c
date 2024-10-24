#include <stdio.h>
/*
 * File: 7-print_tebahpla.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

/**
 * main - Prints the alphabet in lowercase backwards followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'z';
	char nl = '\n';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);
	putchar(nl);
	return (0);
}
