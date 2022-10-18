#include "main.h"

/**
 * _islower - base code
 * @c: integer variable
 * description: checks if input is uppercase or lower case
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if  ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
