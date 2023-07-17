#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0, num2, num3;

	while (num <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if (num != num2 && num < num2 && num2 != num3 && num2 < num3)
				{
					putchar(num + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);
					if (num + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
