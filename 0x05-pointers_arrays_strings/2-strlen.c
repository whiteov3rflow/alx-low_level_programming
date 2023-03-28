#include "main.h"
/**
 * int_strlen - return lenght of a given string
 * @s: String to be checked
 * Return: void 
 */

int_strlen(char *s)
{
	int i;
	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
