#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - print signs
 * @n: expression
 * Return: Always 0 Success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
