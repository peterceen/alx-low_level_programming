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
		_putchar('0');

		for (j = 0; j <= n; j++)
		{
			a = i * j;
			tableformat(a);
		}
	}
}


/**
 * tableformat - formatted characters to output
 * @a: number to format
 * Return: nothing
 */

void tableformat(int a)
{
	if (a <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(a + '0');
	}
	else if (a > 9 && a <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(a / 100 + '0');
		_putchar(a / 10 % 10 + '0');
		_putchar(a % 10 + '0');
	}
}
