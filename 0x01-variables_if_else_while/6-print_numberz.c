#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar("\n");
	return (0);
}
