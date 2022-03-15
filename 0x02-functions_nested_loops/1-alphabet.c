#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in small size
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphab;

	for (alphab = a; a <= z; a++)
	{
		_putchar(alphab);
	}
	_putchar('\n');
	return (0);
}
