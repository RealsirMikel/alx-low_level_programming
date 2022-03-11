#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nomba;

	char alphab;

	for (nomba = 0; nomba <= 9; nomba++)
	{
		putchar(nomba % 10 + '0');
	}
	for (alphab = 'a'; alphab <= 'f'; alphab++);
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
