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
	char lowercase;

	char uppercase;

	lowercase = 'a';

	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}


