#include <stdio.h>
#include <stdlib.h>
/**
 *main - stars the program
 *@argc: size of the argv array
 *@argv: containing of the command
 *Return: Return 1 if print a error or 0 if is complete
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	printf("%d\n", sum);
	}
	return (0);
}
