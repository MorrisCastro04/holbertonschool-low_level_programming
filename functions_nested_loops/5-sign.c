#include <stdio.h>
#include "main.h"
/**
 *print_sign - prints the sign
 *Return: Return the values (+,1),(-,1) and (0,0)
 *@n: variable to see if greated, equal or less that 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
