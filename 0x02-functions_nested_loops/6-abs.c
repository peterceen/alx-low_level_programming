#include "main.h"

/**
 * _abs - the modulo
 * @c: an input parameter
 *
 * Description: This function returns absolute value of a number
 *
 * Return: Absolute value of number c.
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
