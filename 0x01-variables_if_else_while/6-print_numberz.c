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
		putchar(basedigit % 10 + '0');
		basedigit++;
	}
	putchar('\n');
	return (0);
}
