#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * return - always 0(success)
 *
 * The program assigns a random number to  a variable n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
	{
	printf(" is positive\n");
	}

	else if (n == 0)
	{
	printf(" is zero\n");
	}

	else
	{
	printf(" is negative\n");
	}

	return (0);
}
