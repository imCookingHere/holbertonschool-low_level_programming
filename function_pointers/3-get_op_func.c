#include "3-calc.h"
#include <string.h>
#include <stddef.h>

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

	/* Check that the operator is a single character */
	if (strlen(s) != 1)
	return (NULL);

	while (ops[i].op != NULL)
	{
	if (*s == *(ops[i].op))
	return (ops[i].f);
	i++;
	}

	return (NULL);
}
