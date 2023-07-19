#include "main.h"

/**
 * times_table - prints the 9 times table
 *
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int pro = i * j;

			_putchar(pro + 48);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
