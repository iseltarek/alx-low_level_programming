#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using putchar function.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char a[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(a[ch]);
	_putchar('\n');
	return (0);
}
