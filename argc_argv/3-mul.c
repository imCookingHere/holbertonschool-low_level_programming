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

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
