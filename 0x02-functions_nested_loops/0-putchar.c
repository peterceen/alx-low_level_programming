#include <unistd.h>

/**
 * _putchar writes the char to standout
 *
 * Return: success 1
 *
 */

int _putchar(char c)
{
	return(write (1, &c, 1));

}
