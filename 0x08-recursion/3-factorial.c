#include "main.h"
/**
 * factorial - Function that returns the factorial of given number
 * @n: The number that we have calculate the factorial
 * Return: An int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
