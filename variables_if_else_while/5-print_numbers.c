#include <stdio.h>
/**
 *main - starts the program
 *description: print 1 to 9
 *Return: Return 0 always
 *
 */

int main(void)
{ int n;

	for (n = 0; n <= 9; n++)
	{ printf("%d", n);
	}
	putchar('\n');
	return (0);
}
