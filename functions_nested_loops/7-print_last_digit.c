#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - look for the last digit
 *@n: is the number to be searched for the last digit
 *Return: Return the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	if (last_digit < 0)
	{
		last_digit = (last_digit * -1);
	}
	_putchar (last_digit + '0');
	return (last_digit);
}
