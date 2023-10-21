#include <stdio.h>
#include "main.h"
/**
 *_isdigit - check is the var is a digit
 *@c: is the char that the program will check
 *Return: Return 1 if is a digit otherwise return 0
 *
 */

int _isdigit(int c)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
