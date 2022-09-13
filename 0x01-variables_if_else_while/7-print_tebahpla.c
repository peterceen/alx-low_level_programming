#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'prints numbers in reverse z to a'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int bar;

	for (bar ='z'; bar <= 'a'; bar++)
	{
		putchar(bar);
	}
	putchar('\n');

	return (0);
}
