#include "main.h"
/**
 * reverse_array - it reverses elements from an array
 * @n: the numbers of elements in the array
 * @a: pointer that store array values
 * Return: O
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for(i=0; i < n/2; i++)
	{
		j = a[i];
		a = a[n-1-i];
		a = [n-1-i] = j;
	}
}
