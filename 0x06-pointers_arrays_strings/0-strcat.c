#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates strings.
 * @dest: first input string
 * @src: second input string
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
