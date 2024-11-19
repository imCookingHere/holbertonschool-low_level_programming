#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to print.
 * @f: A pointer to the function used to print the name.
 *
 * Description: This function takes a name and a function pointer `f`.
 *              The function `f` is called with `name` as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}
