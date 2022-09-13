#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: 'this code prints numbers 0 through 9'
 *
 * Return: Always 0(success)
 */

int main(void)

{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

