#include "main.h"

/**
 * _strcmp - a function for comparerism.
 * @s1: first input string
 * @s2: second input string
 * Return: The difference betweene s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
