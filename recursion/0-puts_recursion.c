#include "main.h"
/**
 *_putchar_recursion - print a string
 *@s: the string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar ('\n');
}