#include <stdio.h>
/**
 *main - main starts the program
 *description: print the alphabet in lowercase and uppercase
 *Return: Return 0 always
 *
 */

int main(void)
{
	char a_z, A_Z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{ putchar(a_z);
	} for (A_Z = 'A'; A_Z <= 'Z'; A_Z++)
	{ putchar(A_Z);
	} putchar('\n');
	return (0);
}
