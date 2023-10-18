#include <stdio.h>
#include "main.h"
/**
 *_isalpha - prints the sign
 *description: this program check the cases
 *return: if is lowercase return 1 otherwise return 0
 *@c is the lleter that the program will chack
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
