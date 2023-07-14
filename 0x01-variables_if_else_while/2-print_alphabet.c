#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
