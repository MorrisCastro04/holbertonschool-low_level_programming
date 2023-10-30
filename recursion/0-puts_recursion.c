#include "main.h"
/**
 *_putchar_recursion - print a string
 *@s: the string to print
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar ('\n);'
}
