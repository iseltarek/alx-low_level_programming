#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabet using putchar function.
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	for (char ch = 'a'; ch < 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
