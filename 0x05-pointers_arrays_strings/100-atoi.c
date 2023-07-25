#include "main.h"
/**
 * _atoi - converts to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/
int _atoi(char *s)
{
	unsigned int x = 0;
	int sign = 1;

	do {
		if (*s == '_')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);
	return (x * sign);
}
