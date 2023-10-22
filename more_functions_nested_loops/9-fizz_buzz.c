#include <stdio.h>
/**
 *main - starts the program
 *Return: Return 0 always
 *
 *
 */

int main(void)
{
	int num, mult1 = 3, mult2 = 5;

	for (num = 1; num <= 100; num++)
	{
		if (mult1 == num || mult2 == num)
		{
			if (mult1 == num && mult2 == num)
			{
				printf("FizzBuzz");
				mult1 = (mult1 + 3);
				mult2 = (mult2 + 5);
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
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
