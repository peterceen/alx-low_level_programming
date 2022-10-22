#include "main.h"

/**
 * print_times_table- the code
 * @n: input variable
 *
 * description: this function prints 9times table
 *
 * return: always 0.
 */

void print_times_table(int n)
{
	int i, j, a;

	if (n > 0 && n < 15)
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			a = i * j;
			if ((a / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(a + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
