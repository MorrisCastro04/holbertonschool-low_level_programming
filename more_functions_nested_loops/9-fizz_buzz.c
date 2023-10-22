#include <stdio.h>
/**
 *
 *
 *
 *
 */

int main(void)
{
	int num, mult;

	for (num = 1; num <= 100; num++)
	{
		for (mult = 3;mult <= 100; mult *= 3)
		{
			printf("Fizz");
		}
		printf("%d", num);
		printf(" ");
	}
	return(0);
}
