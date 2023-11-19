#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - Can print anything
 *@format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, lenght = 0;
	char *str = NULL;

	va_start(list, format);
	while (format && format[lenght])
		lenght++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if ((i + 1) != lenght)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
