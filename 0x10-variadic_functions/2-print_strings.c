#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: sepreates
 * @n:number of arguments
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		printf("%s", x);
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
