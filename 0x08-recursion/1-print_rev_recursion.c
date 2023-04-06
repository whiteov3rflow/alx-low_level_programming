#include "main.h"
/**
 * _print_rev_recursion - Function that reverse a string recursively
 * @s: pointer of the string to be reversed
 * Return: String
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
