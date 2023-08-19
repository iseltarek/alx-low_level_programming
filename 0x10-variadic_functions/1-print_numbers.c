#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: argument
 * @n: number of parameters
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = v_arg(args, int);

		printf("%d", x);
		if (separator != NULL && i != n - 1)
			printf("%c", separator);
	}
	printf("\n");
	va_end(args);
}
