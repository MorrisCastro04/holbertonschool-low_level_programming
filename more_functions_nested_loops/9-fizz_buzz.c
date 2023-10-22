#include <stdio.h>
/**
 *
 *
 *
 *
 */

int main(void)
{
	int num, mult = 3;

	for (num = 1; num <= 100; num++)
	{
		if (mult == num)
		{
			printf("Fizz");
			mult = (mult + 3);
		}
		printf("%d", num);
		printf(" ");
	}
	return(0);
}
