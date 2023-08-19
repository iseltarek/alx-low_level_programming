#include "function_pointers.h"
/**
 * int_index - searches for int
 * @array: array
 * @size: size
 * @cmp:function
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				x = i;
				break;
			}
		}
		return (x);
	}
	return (-1);
}
