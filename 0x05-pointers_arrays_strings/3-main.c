#include <stdio.h>

void _puts(char *);

/**
 * main - check the code
 * 
 * Return: Always 0. 
 */
int main(void)
{
	char *str;
	
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
