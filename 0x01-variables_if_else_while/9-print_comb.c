#include <stdio.h>
#include <stdlib.h>

/**
 * main - print comb
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nomba;

	for (nomba = 0; nomba <= 9; nomba++)
	{
		putchar(nomba % 10 + '0');
		if (nomba < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
