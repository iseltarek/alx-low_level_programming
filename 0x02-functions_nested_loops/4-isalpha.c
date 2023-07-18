#include "main.h"
/**
 * _isalpha - function to check if character is letter or not
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is letter
 * otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 96 && c <= 122)
		return(1);
	if (c >= 65 && c <= 87)
		return (1);
	return (0);
}
