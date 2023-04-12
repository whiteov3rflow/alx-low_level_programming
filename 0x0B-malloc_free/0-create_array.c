#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that create an array of char
 * @c: char to asssign
 * @size: size of the array
 * Return: a pointer to an array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
