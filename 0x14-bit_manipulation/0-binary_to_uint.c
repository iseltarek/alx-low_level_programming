#include "main.h"
/**
 * binary_to_uint - convert binary into decimal
 * @b: 0 or 1
 * Return: num
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
