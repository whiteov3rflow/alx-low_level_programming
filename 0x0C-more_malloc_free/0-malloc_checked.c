#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The numnber of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
