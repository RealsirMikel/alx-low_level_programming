#include <stdlib.h>
#include <stdio.h>

/**
 * main - print combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, last;

	for (first = 0; first <= 8; first++)
	{
		for (last = 1; last <= 9; last++)
		{
			if (first < last)
			{
				putchar(first % 10 + '0');
				putchar(last % 10 + '0');
				if (first != 8 || last != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
