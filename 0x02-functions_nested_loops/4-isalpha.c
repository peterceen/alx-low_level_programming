#include "main.h"

/**
 * _isalpha - base code
 * @c: integer variable
 * description: checks if input is uppercase or lower case
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isalpha(int c)
{
	if  (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
