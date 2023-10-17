#include <stdio.h>
/**
 *main - starts the program
 *description: print from 1 to 10 
 *Return: Return 0 always
 */

int main(void)
{ char n;

	for (n = '0'; n <= '9'; n++)
	{ putchar(n);
	  putchar(',');
	  putchar(' ');
	} putchar('\n');
	return (0);
}
