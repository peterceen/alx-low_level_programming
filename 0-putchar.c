#include <putchar.h>

/**
 * main: check the description
 * Description: print putchar
 * Return: 0.
 */
int main (void)
{
	char word[8] ="_putchar";
	int i;

	for(i=0; i<9; i++)
		_putchar(word[i]);
	_putchar('\n');
	return(0);
}
