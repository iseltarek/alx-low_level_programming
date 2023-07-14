#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase and uppercase letters
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a', ch2 = 'A';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch2 < 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
