#include "main.h"

/*
 * print_numbers- a function that prints the numbers, from 0 to 9, 
 * followed by a new line.Do not print 2 and 4.
 * return: the value of numbers 0 to 9.
 */

void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		_putchar(a);
	}
	_putchar('\n');
}
