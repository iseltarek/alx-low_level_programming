#include "main.h"
/**
 * puts_half - prints half of the string
 *
 * @str: parameter
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int n = 0, i;

	while (str[n])
		n++;
	for (i = n / 2; i < n; i++)
			putchar(str[i]);
	putchar('\n');
}
