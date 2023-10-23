#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; i <= *s; i++)
	{
		_putchar(*(s + i));
	}
}
