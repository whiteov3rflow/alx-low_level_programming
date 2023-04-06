#include "main.h"
/**
 * _strlen_recursion - Function that return the lenght of a string
 * @s: Pointer of the string
 * Return: The lenght of the string (int)
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
