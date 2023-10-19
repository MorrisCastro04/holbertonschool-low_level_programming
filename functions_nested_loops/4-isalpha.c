#include <stdio.h>
#include "main.h"
/**
 *_isalpha - it will check if is lowercase ot uppercase
 *return : return 1 if the letter is lower case
 *description: this program check the cases
 *return: return 0,1
 *@c: is the leter that the program will chack
 */

int _isalpha(int c)
{
	int i;

	for (i = 65 ; i <= 122 ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
