#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a provided function pointer
 * @name: the string containing the name to print
 * @f: a pointer to the function that will print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
