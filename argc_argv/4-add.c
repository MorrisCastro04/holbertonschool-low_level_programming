#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - stars the program
 *@argc: size of the argv array
 *@argv: containing of the command
 *Return: Return 1 if print a error or 0 if is complete
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0,  sum = 0;
	char *number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		number = argv[i];
		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
