#include <stdio.h>
/**
 *main - starts the program
 *description: print alphabet in reverse
 *Return: Return 0 always
 *
 */

int main(void)
{ char z_a;

	for (z_a = 'z'; z_a >= 'a'; z_a--)
	{ putchar(z_a);
	}
	putchar('\n');
	return (0);
}
