#include <stdio.h>

/**
 * swap_int - function to swap two integer values.
 * @a: interger input pointer
 * @b:pointer input integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
