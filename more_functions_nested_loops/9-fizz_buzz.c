#include <stdio.h>
/**
 *
 *
 *
 *
 */

int main(void)
{
	int num, mult1 = 3, mult2 = 5;

	for (num = 1; num <= 100; num++)
	{
		if (mult1 == mult2)
		{
			printf("FizzBuzz");
		}
		else if (mult1 == num)
		{
			printf("Fizz");
			mult1 = (mult1 + 3);
		}
		else if (mult2 == num)
		{
			printf("Buzz");
			mult2 = (mult2 + 5);
		}
		printf("%d", num);
		printf(" ");
	}
	return(0);
}
