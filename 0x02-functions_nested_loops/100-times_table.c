#include "main.h"

/**
 * print_times_table - prints
 *
 * @n: takes number
*/

void print_times_table(int n)
{
	 int i, j, pro;

	if (n <= 15 || n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');

				pro = i * j;
				if (pro <= 9)
					_putchar(' ');
				if (pro <= 99)
					_putchar(' ');
				if (pro >= 100)
				{
					_putchar((pro / 100) + 48);
					_putchar((pro / 10) % 10 + 48);
				}
				else if (pro <= 99 && pro >= 10)
					_putchar((pro / 10) + 48);
				_putchar((pro % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
