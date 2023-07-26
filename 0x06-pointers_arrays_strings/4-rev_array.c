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
	int i, j = n;
	int *b = *a;

	for (i = 0; i < n; i++)
	{
		a[n - 1] = b[i];
		n--;
	}
	return (0);
}
