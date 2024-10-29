#include "stdio.h"

/**
 * main - prints the numbers 1 to 100 followed by a new line
 * multiples of three print Fizz instead of the number
 * multiples of five print buzz instead of the number
 * for numbers which are multiples of both three and five print FizzBuzz
 * Return: 0
 */

	int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", a);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
