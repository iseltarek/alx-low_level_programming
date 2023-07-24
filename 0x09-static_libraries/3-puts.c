#include "main.h"
/**
 * _puts - print the string
 *
 * @str: parameter
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
