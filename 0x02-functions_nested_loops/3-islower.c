#include "main.h"

/**
 * _islower - base code
 * @c: integer variable 
 * description: checks if input is uppercase or lower case
 *
 * return: Success 0  1
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
