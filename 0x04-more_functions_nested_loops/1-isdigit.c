#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _isdigit - print digit (0 to 9)
 * @c: int declared
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
