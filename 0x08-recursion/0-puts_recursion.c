#include "main.h"
/**
 * _puts_recursion- Function that return a string followed by a new line
 * @s: pointer of the string to be returned
 * Return: A string 
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
