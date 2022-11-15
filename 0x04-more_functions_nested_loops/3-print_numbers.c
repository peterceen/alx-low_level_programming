#include "main.h"

/*
 * print_numbers- A function to print numbers
 *
 * return: the value of numbers 0 to 9.
 */

void print_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
