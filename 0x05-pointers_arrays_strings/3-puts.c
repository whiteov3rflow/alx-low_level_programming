#include "main.h"
/**
 * _puts: Function that print a string
 * @str: Variable to be printed
 * _putchar: prints to stdout
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
	
		_putchar(str[i]);

		i++;
	}
	_putchat('\n');
}
