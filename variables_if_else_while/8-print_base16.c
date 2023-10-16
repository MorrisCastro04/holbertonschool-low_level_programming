#include <stdio.h>
/**
 *main - stars the program
 *descripton: print all 15 hexadecimal
 *Return: Return 0 always
 */

int main(void)
{
	char a_f, n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	} for (a_f = 'a'; a_f <= 'f'; a_f++)
	{ putchar(a_f);
	} putchar('\n');
	return (0);
}
