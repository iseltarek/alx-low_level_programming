#include "main.h"
/**
 * set_bit - return number
 * @n: intt
 * @index: nukmber
 * Retrun: 1 if true -1 if false
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n !=1L << index));
}
