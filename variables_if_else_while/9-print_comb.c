#include <stdio.h>
/**
 *main - starts the program
 *description: print from 1 to 10 
 *Return: Return 0 always
 */

int main(void)
{ int n;

	for (n = '0'; n <= '9'; n++)
	{ putchar(n);
		if (n != '9' )
		{
	  putchar(',');
	  putchar(' ');
		}
	} putchar('\n');
	return (0);
}
