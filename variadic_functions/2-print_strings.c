#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 *print_strings - funcion to print strings
 *@separator: char that is gonna be between strings
 *@n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *name = va_arg(list, char *);

		if (name == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", name);
		}
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
