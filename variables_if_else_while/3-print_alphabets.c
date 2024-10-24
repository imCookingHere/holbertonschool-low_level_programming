#include <stdio.h>
/*
 * File: 3-print_alphabets.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in
 *		uppercase followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';
	char nl = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
	putchar(ALPHABET);
	putchar(nl);
	return (0);
}
