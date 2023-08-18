#include "function_pointers.h"
/**
 * array_iterator - maps an array through a func
 * @array:int array
 * @size: size of array
 * @action: finction
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = &array + size - 1;

	if (array && size && action)
	{
		for (i = 0; array <= end; i++)
			action(array[i]);
	}
}
