#include "main.h"

/*
 * print_square -Afunction that prints square.
 * @size parameter for size
 * return: a value of 0.
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{

		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				_putchar(35);
			_putchar('\n');
			}
		}
	else
		_putchar('\n');

}
