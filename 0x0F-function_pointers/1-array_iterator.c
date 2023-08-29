#include "function_pointers.h"
/**
 * array_iterator - maps an array through a func
 * @array:int array
 * @size: size of array
 * @action: finction
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
