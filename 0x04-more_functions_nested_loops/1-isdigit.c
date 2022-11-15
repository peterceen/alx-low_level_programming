#include "main.h"

/* _isdigit - A function that checks for digits
 *
 * @c: input parameter
 *
 * return 1 if c is digit or 0 if otherwise.
 */

int _isdigit(int c)
{
	int a = '0';
	int digit = 0;

	for (; a <= '9'; a++)
	{
		if (c == a)
		{
			digit = 1;
			break;
		}
	}
	return (digit);
}
