#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mikel = 'a';
	while (mikel <= 'z')
		putchar(mikel);
	mikel++;
	putchar('\n');
	return (0);
}

