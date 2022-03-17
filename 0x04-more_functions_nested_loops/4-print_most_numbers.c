#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: 0 Success
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z != 2 && z != 4)
		{
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
