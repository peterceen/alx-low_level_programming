#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: 'print decimal numbers'
 *
 * Return: Always 0(success)
 *
 */

int main(void)
{
	int num;

	char bar;

	for (num = '0'; num < '9'; num++)
	{
		putchar(num);
	}
	for (bar = 'a'; bar <= 'f'; bar++)
	{
		putchar(bar);
	}
	putchar('\n');

	return (0);

}
