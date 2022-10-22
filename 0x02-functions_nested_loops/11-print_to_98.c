#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this is the code
 * @n: an input number
 *
 * description: this code prints numbers to 98
 *
 * return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
