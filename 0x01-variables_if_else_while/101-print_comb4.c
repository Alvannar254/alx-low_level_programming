#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: Always 0 9success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{

	for (j = i + 1; j < 10; j++)
	{
	for (k = j + 1; k < 10; k++)
	{
	putchar(j % 10 + '0');
	putchar(k % 10 + '0');
	putchar(i % 10 + '0');

	if (i == 7 && j == 8 && k == 9)
	break;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
