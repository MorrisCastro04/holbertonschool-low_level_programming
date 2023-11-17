#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - starts the program
 *@argc: the size of argv
 *@argv: a array of pointers
 *Return: Return 0 when finish
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
		strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((num2 == 0) && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
