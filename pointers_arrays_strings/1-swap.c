#include <stdio.h>
#include "main.h"
/**
 *swap_int - swap the value of 2 var
 *@a: the first var to swap
 *@b: the second var to swap
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = *a;
	a = *b;
	b = *c;
}
