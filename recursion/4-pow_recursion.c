#include "main.h"
/**
 *_pow_recursion - x raised to the power of y
 *@x: is the first value
 *@y: the number to raised to the power
 *Return: Return the result
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(result, y - 1));
}
