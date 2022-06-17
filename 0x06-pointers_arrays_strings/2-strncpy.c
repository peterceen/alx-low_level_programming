#include "main.h"

/**
 * _strncpy - a function that copies strings.
 * @dest: first  input string
 * @src: second input string
 * @n: input integer
 * Return: pointer to final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
