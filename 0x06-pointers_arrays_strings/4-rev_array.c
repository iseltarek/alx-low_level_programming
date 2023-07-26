#include "main.h"
/**
 * reverse_array - reverse the numbers in array
 *
 * @a: parameter 1
 * @n: size of array
 *
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j = n, *b;
	
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 0; i < n; i++)
	{
		a[n - 1] = b[i];
		n--;
	}
	return (0);
}
