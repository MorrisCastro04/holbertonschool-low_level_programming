#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - funcion to print numbers
 *@separator: char thats go between numbers
 *@n: how many numbers is gonna print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);

		printf("%d", num);
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
