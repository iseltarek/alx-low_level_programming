#include "function_pointers.h"
/**
 * print_name - prints names
 * @name: string
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
