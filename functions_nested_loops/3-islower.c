#include <stdio.h>
#include "main.h"
/**
 *_islower: print if the letter is lowercase
 *c: is a variable that have letters
 *Return: Return 0 always
 *
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
