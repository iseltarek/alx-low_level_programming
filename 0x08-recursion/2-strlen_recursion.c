#include "main.h"
/**
 * _strlen_recursion - prints the lenght of string
 * @s:parameter
 * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s < '\n')
	{
		l++;
		_strlen_recursion(s + 1);
	}
	return (l);
}
