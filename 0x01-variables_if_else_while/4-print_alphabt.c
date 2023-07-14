#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a'

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
