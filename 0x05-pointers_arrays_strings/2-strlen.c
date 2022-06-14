#include <stdio.h>

/**
 * _strlen - a function that returns string length
 * @s: the input string
 * Return : length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
