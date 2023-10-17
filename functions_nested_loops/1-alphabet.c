#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
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
	return (0);
}
