#include "main.h"
/**
 * *create_array - creats array
 * @size: int
 * @c: char
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;
	return (x);
}
