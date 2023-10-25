#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: power to raise base to
 *
 * Return: x raised to the power of y
 * -1 if y is less than 0 (to indicate an error)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * (_pow_recursion(x, y - 1)));
	else
		return (1);
}
