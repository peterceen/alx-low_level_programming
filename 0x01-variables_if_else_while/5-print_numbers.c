#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry Point
 *
 * Description: 'this program writes numbers positive single digits'
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
