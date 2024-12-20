#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument
 *
 * Return: Pointer to the corresponding function,
 * or NULL if operator is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
	/* Compare the entire string to ensure it matches a valid operator */
	if (strcmp(s, ops[i].op) == 0)
	return (ops[i].f);
	i++;
	}

	return (NULL); /* Return NULL if no valid operator is found */
}
