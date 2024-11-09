#include "stdio.h"
#include "main.h"

/**
 * main - prints the number of arguments passed into the function
 * @argc: number of arguments
 * @argv: array containing the arguments as strings
 * Return: 0
 */

	int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
