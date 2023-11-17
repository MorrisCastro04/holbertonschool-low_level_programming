#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

int main (int argc, char *argv[])
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
	if ((argv[1] == 0 || argv[3] == 0) && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf ("%d\n", result);
	return (0);
}
