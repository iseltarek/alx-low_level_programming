#include "main.h"

/**
 * print_sign - checks if the number positive or not
 *
 * @n: takes input from other function
 *
 * Return: returns 1 if 'n' positive
 * returns -1 if 'n' negative , otherwise always return 0
*/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
