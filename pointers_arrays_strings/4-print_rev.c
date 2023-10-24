#include <stdio.h>
#include "main.h"
/**
 *print_rev - print the string in reverse
 *@s: is the string that in gonna print
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*s + i);
		i--;
	}
	_putchar('\n');
}
