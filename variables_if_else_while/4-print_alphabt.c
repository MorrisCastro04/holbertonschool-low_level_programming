#include <stdio.h>
/**
 *main - starts the program
 *description: dont print e and q
 *Return: Return 0 always
 */
int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		if (a_z != 'q' && a_z != 'e')
		{ putchar(a_z);
		}
	} putchar ('\n');
	return (0);
}

