#include <stdio.h>

/**
 * main - print numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int basedigit;

	basedigit = 0;

	while (basedigit < 10)
	{
		putchar(basedigit);
		basedigit++;
	}
	putchar('\n');
	return (0);
}
