#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - starts the program
 *Description: the var n will have a number and with if,elseif and else  will print if the number is negative, 0 or positive
 *Return: Return 0 always
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	};
	return (0);
}
