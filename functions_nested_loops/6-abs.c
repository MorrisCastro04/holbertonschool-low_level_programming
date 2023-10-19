#include <stdio.h>
#include "main.h"
/**
 *_abs - runs the program
 *@n: is the number to get is absolute value
 *Return: Return @n if is positive and @-n if is negative
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
