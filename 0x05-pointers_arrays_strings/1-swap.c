#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Retuen: nothing
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
