#include "main.h"
/**
 * print_array - prints array
 *
 * @a: array parameter
 * @n: second parameter
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	putchar('\n');
}
