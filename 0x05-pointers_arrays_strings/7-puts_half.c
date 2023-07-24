#include "main.h"
/**
 * puts_half - prints half of the string
 *
 * @str: parameter
 *
 * return: nothing
*/

void puts_half(char *str)
{
	int n = 0, i;

	while (str[n])
		n++;
	if (n % 2 != 0)
	{
		for (i = (n - 1) / 2; i < n; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
