#include "main.h"
/**
 * _strlen - return lenght of a given string
 * @s: String to be checked
 * Return: void 
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
