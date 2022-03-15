#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphab;

	int n;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(alphab);
		}
	}
	_putchar('\n');
}
