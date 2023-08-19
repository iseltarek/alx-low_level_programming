#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;

	va_start(args, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}