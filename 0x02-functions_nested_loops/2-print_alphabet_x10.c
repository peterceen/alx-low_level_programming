#include "main.h"

/**
 *  print_alphabet_x10 -prints characters 10 times
 *  description: this print a through z ten times
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
