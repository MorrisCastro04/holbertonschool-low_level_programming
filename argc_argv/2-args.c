#include <stdio.h>
/**
 *main - starts program
 *@argc: size of the string
 *@argv: containing th program command
 *Return: Return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
