#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: parameter
 *
 * Return:nothing
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	while (i--)
		putchar(s[i]);
	putchar('\n');
}
