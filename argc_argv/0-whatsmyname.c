#include <stdio.h>
#include <stdlib.h>
/**
 *main - starts the program
 *@argc: size of argv array
 *@argv: containing the program command
 *Return: Return 0 if argc is not 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == '0')
		{
			printf("%s", argv[i]);
		}
	}
	printf("\n");
	return (0);
}
