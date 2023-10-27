#include "main.h"
/**
 * set_bit - return number
 * @n: intt
 * @index: nukmber
 * Retrun: 1 if true -1 if false
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int size = sizeof(n) * 8, i;

	if (index >= sizeof(n) * 8)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (i == index)
			n[i] = 1;
	}
	if (n[index] == 1)
		return (1);
	else
		return (-1);
}
