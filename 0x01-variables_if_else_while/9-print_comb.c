#include <stdio.h>

/**
 *main - entry point of the program
 *
 *return - alway 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	for (k = j + 1; k < 10; k++)
	{
	for (l = k + 1; l < 10; l++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	putchar(l + '0');
	if (i != 6 || j != 7 || l != 9)
	putchar(',');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
