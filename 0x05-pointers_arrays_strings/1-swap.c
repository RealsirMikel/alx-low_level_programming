#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: a swapped with b
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
