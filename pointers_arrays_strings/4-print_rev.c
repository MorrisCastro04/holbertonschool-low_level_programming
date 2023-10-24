#include <stdio.h>
#include "main.h"
/**
 *print_rev - print the string in reverse
 *@s: is the string that in gonna print
 */

void print_rev(char *s)
{

	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
