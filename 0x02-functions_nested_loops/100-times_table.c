#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: a function that prints the n times table
 * Return: 0 Success
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (z < 10 && y != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(z % 10 + '0');
					}
					else if (z >= 10 && z < 100)
					{
						_putchar(' ');
						_putchar((z / 10) % 10 + '0');
						_putchar(z % 10 + '0');
					}
					else if (z >= 100)
					{
						_putchar((z / 100) % 10 + '0');
						_putchar((z / 10) % 10 + '0');
						_putchar(z % 10 + '0');
					}
				}
				else if (y == 0)
				{
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
