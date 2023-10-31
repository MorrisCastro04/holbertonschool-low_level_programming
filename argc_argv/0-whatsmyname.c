#include <stdio.h>
#include <stlib.h>
/**
 *main - starts the program
 *@argc: size of argv array
 *@argv: containing the program command
 *Return: Return 0 if argc is not 0
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
