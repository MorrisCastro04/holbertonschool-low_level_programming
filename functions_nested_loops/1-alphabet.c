#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void print_alphabet(void)
{ for (char a_z = 'a' ; a_z <= 'z' ; a_z++)
	{ putchar(a_z);
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

