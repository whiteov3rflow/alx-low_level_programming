#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: a pointer to the function to use to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

