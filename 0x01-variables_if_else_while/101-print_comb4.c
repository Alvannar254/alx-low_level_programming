#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: Always 0 9success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 1000; i++)
	{
	j = i / 100;
	k = i / 10 % 10;
	i %= 10;

	if (j < k && k < i)
	{
	putchar(j + '0');
	putchar(k + '0');
	putchar(i + '0');

	if (i + j + k != 9 + 8 + 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
