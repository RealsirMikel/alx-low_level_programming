#include<stdio.h>
#include<stdlib.h>

/**
 * main - natural numbers
 * Return: 0 Success
 */

int main(void)
{
	int a, b;

	b = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 5 == 0) || (a % 3 == 0))
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
