#include <stdio.h>
/**
 *main - starts the program
 *description: print all the alphabet
 *Return: Return o always
 */

int main(void)
{
	char a_z;

	for (a_z = 'a' ; a_z <= 'z' ; a_z++)
	{
		putchar(a_z);
	}
	putchar('\n');
	return (0);
}
