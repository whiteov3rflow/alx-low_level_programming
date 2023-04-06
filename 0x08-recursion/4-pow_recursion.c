#include "main.h"
/**
 * _pow_recursion: Funtion that return x power y recursively
 * @x: The int to pow
 * @y: The base
 * Return: An int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < x)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
