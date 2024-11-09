#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: counts the number of arguments
 * @argv: array containing the arguments as strings
 * Return: 0 otherwise 1
 */

	int main(int argc, char *argv[])
{
	int sum;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);
}
