#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: parameter
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i = 0, x;

	while (str[i])
		i++;
	if (str[0] >= 48 && str[0] <= 58)
	{
	for (x = 0; x < i; x++)
	{
		putchar(48 + x);
		x++;
	}
	}
	else
	{
		for (x = 0; x < i; x++)
        {
                putchar(x);
                x++;
        }
		putchar('\n');
}
