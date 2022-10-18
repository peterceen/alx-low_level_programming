#include "main.h"

/**
 * print_sign- the code
 * @n: -input parameter
 * description: this code prints the sign of numbers
 *
 * Return: 1 if positive or 0 if is zero or -1 if negative
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 1 && n != 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else  if (n == 0)
	{
		_putchar('0');
		_putchar(',');
	} 
	return (0);
}
