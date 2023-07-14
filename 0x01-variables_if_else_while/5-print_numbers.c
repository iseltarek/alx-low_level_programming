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
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
