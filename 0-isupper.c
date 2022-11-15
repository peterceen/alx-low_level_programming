#include "main.h"

/*
 * int _isupper the function
 *
 * @c:the input parameter
 *
 * description: returns value based on letter case
 *
 * return (0 or 1)
 */

int _isupper(int c)
{
	char uppercase = 'Z';
	int isupper = 0;
	
	for (; uppercase >= 'A'; uppercase--)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
