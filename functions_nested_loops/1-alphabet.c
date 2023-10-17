#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void print_alphabet(void);

int main(void)
{ char a_z;

	for (a_z = 'a' ; a_z <= 'z' ; a_z++)
	{ _putchar(a_z);
	}
	putchar('\n');
	return (0);
}

