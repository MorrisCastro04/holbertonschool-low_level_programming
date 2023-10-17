#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - have a char that runs the alphabet
 *description: print the alphabet
 */
void print_alphabet(void)
{
char a_z = 'a';

	while (a_z <= 'z')
	{
		_putchar(a_z);
		a_z++;
	}
	_putchar('\n');
}
