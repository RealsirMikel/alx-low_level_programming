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
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

