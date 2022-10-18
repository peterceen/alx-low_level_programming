#include "main.h"

/**
 * main -entry point of code print_alphabet
 *
 * description: this code prints_alphabet
 *
 * return Always(0)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
