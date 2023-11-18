#include <stdarg.h>
/**
 *sum_them_all - sum all parameters
 *@n: The number of parameters
 *Return: Return 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list Sum;
	unsigned int i, result = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(Sum, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(Sum, int);
	}
	va_end(Sum);
	return (result);
}
