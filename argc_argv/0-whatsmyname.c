#include "stdio.h"
#include "main.h"

/**
 * main - prints the name of the funcion
 * @argc: number of arguments
 * @argv: array containing arguments as strings
 * Return: 0
 */

	int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
