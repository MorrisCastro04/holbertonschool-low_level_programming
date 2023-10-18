#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
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
