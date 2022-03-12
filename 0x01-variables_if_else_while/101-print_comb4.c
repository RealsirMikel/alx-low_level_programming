#include <stdlib.h>
#include <stdio.h>

/**
 * main - print combination of three 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, mid, last;

	for (first = 0; first <= 7; first++)
	{
		for (mid = 1; mid <= 8; mid++)
		{
			for (last = 2; last <= 9; last++)
			{
				if (first < mid <last)
				{
					putchar(first % 10 + '0');
					putchar(mid % 10 + '0');
					putchar(last % 10 + '0');
					if (first != 7 || mid != 8 || last != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
