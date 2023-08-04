#include "main.h"

/**
 * _abs - function that computes the absolute
 *
 * @n: takes the input from other function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
