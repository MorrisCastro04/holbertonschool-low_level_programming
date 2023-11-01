#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 58)
		{
			printf ("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf ("%d\n", sum);
	return (0);
}
