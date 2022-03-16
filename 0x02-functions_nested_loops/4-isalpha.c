#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - prints alphabetic character
 * @c: expression
 * Return: Always 0 Success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
