#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main: Entry point
 *Return: Always 0 (Success)
 *
*/

int main(void)

{  char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		switch (low)
		{
		case 'e':
			low = low + 1;
		break;
		case 'q':
			low = low + 1;
		break;
		}
		putchar(low);
	}
	putchar('\n');
	return (0);
}
