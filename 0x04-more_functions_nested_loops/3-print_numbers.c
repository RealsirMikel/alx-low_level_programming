#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: 0 Success
 */

void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		_putchar(b % 10 + '0');
	}
	_putchar('\n');
}
