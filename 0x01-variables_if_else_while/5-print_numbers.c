#include <stdlib.h>
#include <stdio.h>

/**
 * main - print base ten numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int basedigit;
	basedigit = 0;
	while (basedigit < 10)
	{
		printf("%d", basedigit);
		basedigit++;
	}
	printf("\n");
	return (0);
}
