#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'this prints two letters by two letters'
 *
 * Return: Always(0)
 */

int main(void)
{
	int a;
	int b;

	for  (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar ((a / 10) + '0');
			putchar ((a % 10) + '0');
			putchar (' ');
			putchar ((b / 10) + '0');
			putchar ((b % 10) + '0');
			if (a == 98 && b == 99)
				continue;
			putchar (',');
			putchar (' ');
		}
	} putchar ('\n');
	return (0);
}
