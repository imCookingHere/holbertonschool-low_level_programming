#include "stdio.h"
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: counts the number of arguments
 * @argv: array containing the arguments as strings
 * Return: 0
 */

	int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
	}
