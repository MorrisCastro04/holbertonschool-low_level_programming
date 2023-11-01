#include <stdio.h>
#include <stdlib.h>
/**
 *main - stars the program
 *@argc: lengh of the array
 *@argv: contaning a array of pointers
 *Return: Return 1 if is error or 0 if is complite
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
