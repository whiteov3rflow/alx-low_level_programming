#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated memory
 * @str: char to assign
 * Return: Pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
