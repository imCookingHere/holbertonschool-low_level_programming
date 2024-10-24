#include <stdio.h>
/*
 * File: 2-print_alphabet.c
 * Auth: Jack MacDonald <9902@holberstonstudents.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';
	char nl = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
		continue;
		}
	putchar(alphabet);
	}
	putchar(nl);
	return (0);
}
