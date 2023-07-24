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
	int i = 0, l;
	char x;

	while (s[i])
		i++;
	for (l = 0; l < i / 2; l++)
	{
		x = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = x;
	}
}
