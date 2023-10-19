#include <stdio.h>
#include "main.h"
/**
 *_isalpha - it will check if is lowercase ot uppercase
 *Return: Return 0,1
 *@c: is the leter that the program will chack
 */

int _isalpha(int c)
{
	int i;

	for (i = 65 ; i <= 90 ; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 97 ; i <= 122 ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
