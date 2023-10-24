#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
