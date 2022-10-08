#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - print three characters
 *
 * description - this code prints three  digits 
 * --combination together without repeating any
 *
 * Return Always (0)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if(a != b && a != c && b != c)
				{
					putchar (a);
					putchar (b);
					putchar (c);
				if (a == '7' && b == '8' && c == '9')
					continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	} putchar ('\n');
	return (0);
}
