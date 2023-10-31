#include <stdio.h>
/**
 *main - starts the program
 *@argc: size of argv array
 *@argv: containing the program comand
 *Return: Return the lengh of the array
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
