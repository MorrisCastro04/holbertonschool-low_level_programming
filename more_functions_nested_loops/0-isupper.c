#include <stdio.h>
#include "main.h"
/**
 *_isupper - check if the letter is uppercase
 *@c: is the letter that the programs check
 *Return: Return 1 if upeercase if not return 0
 */

int _isupper(int c)
{
	int i;

	for (i = 65 ; i <= 90 ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
