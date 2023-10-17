#include <stdio.h>
#include "main.h"
/**
 *_islower: starts the program to look if the latter is lowercase
 *int c: is  variable that have a number between 97 and 122
 *description: the program look if the letter is lowercase
 *Return: Return 0 always
 */

int _islower(int c)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
